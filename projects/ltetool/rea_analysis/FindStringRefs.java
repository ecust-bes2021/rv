import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

// Ghidra headless post-script: find defined strings containing any needle,
// list all code references to them, and decompile each referencing function.
// Usage: analyzeHeadless ... -postScript FindStringRefs.java <output.c> <needle1> <needle2> ...
public class FindStringRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args[0];
        PrintWriter pw = new PrintWriter(new FileWriter(outPath));
        List<String> needles = new ArrayList<>();
        for (int i = 1; i < args.length; i++) needles.add(args[i]);

        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        Set<Function> done = new LinkedHashSet<>();

        Listing listing = currentProgram.getListing();
        DataIterator dit = listing.getDefinedData(true);
        while (dit.hasNext()) {
            Data d = dit.next();
            Object v = d.getValue();
            if (v == null) continue;
            String s = v.toString();
            boolean hit = false;
            for (String n : needles) {
                if (s.contains(n)) { hit = true; break; }
            }
            if (!hit) continue;
            pw.println("// STRING " + d.getAddress() + " : " + s.replace('\n', ' '));
            ReferenceManager rm = currentProgram.getReferenceManager();
            ReferenceIterator ri = rm.getReferencesTo(d.getAddress());
            int rc = 0;
            while (ri.hasNext()) {
                Reference r = ri.next();
                Address from = r.getFromAddress();
                Function f = currentProgram.getFunctionManager().getFunctionContaining(from);
                pw.println("//   ref from " + from + " in "
                        + (f == null ? "<no function>" : f.getName() + "@" + f.getEntryPoint()));
                if (f != null) done.add(f);
                rc++;
            }
            if (rc == 0) pw.println("//   (no direct references found)");
        }
        pw.println();
        for (Function f : done) {
            pw.println("//==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
            DecompileResults res = di.decompileFunction(f, 90, monitor);
            if (res.decompileCompleted()) pw.println(res.getDecompiledFunction().getC());
            else pw.println("// decompile failed: " + res.getErrorMessage());
            pw.println();
        }
        di.dispose();
        pw.close();
        println("FindStringRefs: " + done.size() + " functions dumped to " + outPath);
    }
}