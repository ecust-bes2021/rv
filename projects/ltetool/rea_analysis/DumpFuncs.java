import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;

// Ghidra headless post-script: dump all functions' decompiled C to a file.
// Usage: analyzeHeadless <projdir> <projname> -import <obj> -scriptPath <dir> -postScript DumpFuncs.java <output.c>
public class DumpFuncs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outPath = args.length > 0 ? args[0] : "/tmp/ghidra_funcs.c";
        PrintWriter pw = new PrintWriter(new FileWriter(outPath));
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext()) {
            Function f = it.next();
            pw.println("//==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
            DecompileResults res = di.decompileFunction(f, 60, monitor);
            if (res.decompileCompleted()) {
                pw.println(res.getDecompiledFunction().getC());
            } else {
                pw.println("// decompile failed: " + res.getErrorMessage());
            }
            pw.println();
            n++;
        }
        di.dispose();
        pw.close();
        println("DumpFuncs: wrote " + n + " functions to " + outPath);
    }
}