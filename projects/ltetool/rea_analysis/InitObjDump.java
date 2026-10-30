import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

// Force-create functions at every defined symbol in executable memory, then
// decompile all functions. Works around Ghidra COFF/COMDAT under-analysis.
// Usage: analyzeHeadless ... -postScript InitObjDump.java <output.c>
public class InitObjDump extends GhidraScript {
    @Override
    public void run() throws Exception {
        String outPath = getScriptArgs()[0];
        PrintWriter pw = new PrintWriter(new FileWriter(outPath));

        Set<Address> fnAddrs = new LinkedHashSet<>();
        SymbolTable st = currentProgram.getSymbolTable();
        SymbolIterator si = st.getAllSymbols(true);
        while (si.hasNext()) {
            Symbol s = si.next();
            Address a = s.getAddress();
            if (a == null) continue;
            MemoryBlock b = currentProgram.getMemory().getBlock(a);
            if (b == null || !b.isExecute()) continue;
            if (s.getSymbolType() != SymbolType.FUNCTION
                && s.getSymbolType() != SymbolType.LABEL) continue;
            Function f = currentProgram.getFunctionManager().getFunctionAt(a);
            if (f == null) {
                f = createFunction(a, s.getName());
            }
            if (f != null) fnAddrs.add(f.getEntryPoint());
        }
        FunctionIterator fit = currentProgram.getFunctionManager().getFunctions(true);
        while (fit.hasNext()) fnAddrs.add(fit.next().getEntryPoint());

        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int n = 0;
        for (Address a : fnAddrs) {
            Function f = currentProgram.getFunctionManager().getFunctionAt(a);
            if (f == null) continue;
            pw.println("//==== " + f.getName() + " @ " + f.getEntryPoint() + " ====");
            DecompileResults res = di.decompileFunction(f, 90, monitor);
            if (res.decompileCompleted()) pw.println(res.getDecompiledFunction().getC());
            else pw.println("// decompile failed: " + res.getErrorMessage());
            pw.println();
            n++;
        }
        di.dispose();
        pw.close();
        println("InitObjDump: wrote " + n + " functions to " + outPath);
    }
}