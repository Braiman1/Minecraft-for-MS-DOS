// Export decompiler output, function status, call edges and string references.
// @category ReverseEngineering
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

public class ExportDecompiled extends GhidraScript {
    private String clean(Object s) { return String.valueOf(s).replace('\t',' ').replace('\n',' ').replace('\r',' '); }
    public void run() throws Exception {
        File out = new File(getScriptArgs()[0]); out.mkdirs();
        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true); decomp.toggleSyntaxTree(false);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) throw new IOException("Cannot open decompiler");
        int total=0,ok=0,failed=0,thunks=0;
        try (PrintWriter code = new PrintWriter(new File(out,"all-decompiled.c"), StandardCharsets.UTF_8);
             PrintWriter index = new PrintWriter(new File(out,"functions.tsv"), StandardCharsets.UTF_8);
             PrintWriter edges = new PrintWriter(new File(out,"calls.tsv"), StandardCharsets.UTF_8);
             PrintWriter strings = new PrintWriter(new File(out,"string-references.tsv"), StandardCharsets.UTF_8)) {
            code.println("/* Ghidra pseudocode, NOT original or buildable C++. Review types and control flow. */");
            index.println("address\tname\tbytes\tstatus\tmessage"); edges.println("caller\tcallee\tname");
            strings.println("string_address\tstring\treference_address\tfunction_address\tfunction_name");
            FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
            while(it.hasNext() && !monitor.isCancelled()) {
                Function f=it.next(); total++;
                if(f.isThunk()) { thunks++; index.println(f.getEntryPoint()+"\t"+clean(f.getName())+"\t"+f.getBody().getNumAddresses()+"\tthunk\t"); continue; }
                DecompileResults r=decomp.decompileFunction(f,20,monitor);
                boolean success=r.decompileCompleted() && r.getDecompiledFunction()!=null;
                index.println(f.getEntryPoint()+"\t"+clean(f.getName())+"\t"+f.getBody().getNumAddresses()+"\t"+(success?"ok":"failed")+"\t"+clean(r.getErrorMessage()));
                if(success) { ok++; code.println("\n/* ADDRESS: "+f.getEntryPoint()+" NAME: "+clean(f.getName())+" */"); code.println(r.getDecompiledFunction().getC()); }
                else { failed++; code.println("\n/* FAILED: "+f.getEntryPoint()+" "+clean(r.getErrorMessage())+" */"); }
                for(Function callee:f.getCalledFunctions(monitor)) edges.println(f.getEntryPoint()+"\t"+callee.getEntryPoint()+"\t"+clean(callee.getName()));
                if(total%250==0) { println("EXPORT_PROGRESS total="+total+" ok="+ok+" failed="+failed); code.flush(); index.flush(); edges.flush(); }
            }
            DataIterator data=currentProgram.getListing().getDefinedData(true);
            while(data.hasNext() && !monitor.isCancelled()) {
                Data d=data.next(); if(!d.hasStringValue()) continue;
                ReferenceIterator refs=currentProgram.getReferenceManager().getReferencesTo(d.getAddress());
                while(refs.hasNext()) {
                    Reference ref=refs.next(); Function f=currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    strings.println(d.getAddress()+"\t"+clean(d.getValue())+"\t"+ref.getFromAddress()+"\t"+(f==null?"":f.getEntryPoint())+"\t"+(f==null?"":clean(f.getName())));
                }
            }
        } finally { decomp.dispose(); }
        try(PrintWriter summary=new PrintWriter(new File(out,"export-summary.txt"),StandardCharsets.UTF_8)) {
            summary.println("program="+currentProgram.getName()); summary.println("language="+currentProgram.getLanguageID());
            summary.println("compiler="+currentProgram.getCompilerSpec().getCompilerSpecID());
            summary.println("functions="+total); summary.println("decompiled="+ok); summary.println("failed="+failed); summary.println("thunks="+thunks); summary.println("cancelled="+monitor.isCancelled());
        }
        println("EXPORT_COMPLETE total="+total+" ok="+ok+" failed="+failed+" thunks="+thunks);
    }
}
