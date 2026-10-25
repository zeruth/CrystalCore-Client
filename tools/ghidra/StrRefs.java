// Decompiles every function that references a string containing one of the given substrings.
// args: <out file> <substring>...
// @category CrystalCore
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.data.StringDataInstance;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import java.io.PrintWriter;
import java.util.*;

public class StrRefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        List<String> needles = Arrays.asList(args).subList(1, args.length);
        Map<Function, Set<String>> hits = new LinkedHashMap<>();
        for (Data d : currentProgram.getListing().getDefinedData(true)) {
            if (!StringDataInstance.isString(d)) continue;
            String s = StringDataInstance.getStringDataInstance(d).getStringValue();
            if (s == null) continue;
            String low = s.toLowerCase();
            boolean match = false;
            for (String n : needles) if (low.contains(n.toLowerCase())) match = true;
            if (!match) continue;
            for (Reference r : getReferencesTo(d.getAddress())) {
                Function f = getFunctionContaining(r.getFromAddress());
                if (f == null) continue;
                hits.computeIfAbsent(f, k -> new TreeSet<>()).add(s);
            }
        }
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        try (PrintWriter w = new PrintWriter(args[0], "UTF-8")) {
            for (Map.Entry<Function, Set<String>> e : hits.entrySet()) {
                Function f = e.getKey();
                w.println("// ==== " + f.getName() + " @ " + f.getEntryPoint() + "  strings: " + e.getValue());
                DecompileResults r = di.decompileFunction(f, 60, monitor);
                w.println(r.decompileCompleted() ? r.getDecompiledFunction().getC() : "// decompile failed");
            }
        }
        println("StrRefs: " + hits.size() + " functions -> " + args[0]);
    }
}
