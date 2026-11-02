// Discover and export additional candidate methods from validated RTTI vtables.
// @category ReverseEngineering
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.Address;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.*;

public class ExportVirtualMethods extends GhidraScript {
    private String clean(Object s){return String.valueOf(s).replace('\t',' ').replace('\n',' ').replace('\r',' ');}
    public void run() throws Exception {
        File dir=new File(getScriptArgs()[0]); Set<String> done=new HashSet<>(); Set<String> targets=new TreeSet<>();
        for(String line:Files.readAllLines(new File(dir,"functions.tsv").toPath(),StandardCharsets.UTF_8)) {
            String[] c=line.split("\t",-1);if(c.length>3 && c[3].equals("ok"))done.add(c[0]);
        }
        for(String line:Files.readAllLines(new File(dir,"candidate-vtable-methods.tsv").toPath(),StandardCharsets.UTF_8)) {
            String[] c=line.split("\t",-1);if(c.length>5 && !c[5].equals("function_address"))targets.add(c[5]);
        }
        DecompInterface decomp=new DecompInterface();decomp.toggleCCode(true);decomp.toggleSyntaxTree(false);decomp.openProgram(currentProgram);
        int attempted=0,ok=0,failed=0,skipped=0,created=0;
        try(PrintWriter code=new PrintWriter(new File(dir,"virtual-methods-extra.c"),StandardCharsets.UTF_8);
            PrintWriter index=new PrintWriter(new File(dir,"virtual-method-status.tsv"),StandardCharsets.UTF_8)) {
            index.println("address\tname\tstatus\tmessage");
            code.println("/* Supplementary pseudocode: candidate RTTI vtable targets missing from the initial successful export. */");
            for(String target:targets) {
                if(done.contains(target))continue; attempted++;
                Address addr=toAddr(target); Function f=currentProgram.getFunctionManager().getFunctionAt(addr);
                if(f==null) {
                    Function containing=currentProgram.getFunctionManager().getFunctionContaining(addr);
                    if(containing!=null) {skipped++;index.println(target+"\t\tskipped\tInside "+containing.getEntryPoint());continue;}
                    disassemble(addr);f=createFunction(addr,null);if(f!=null)created++;
                }
                if(f==null){failed++;index.println(target+"\t\tfailed\tCannot define function");continue;}
                DecompileResults r=decomp.decompileFunction(f,20,monitor);
                boolean success=r.decompileCompleted() && r.getDecompiledFunction()!=null;
                index.println(target+"\t"+clean(f.getName())+"\t"+(success?"ok":"failed")+"\t"+clean(r.getErrorMessage()));
                if(success){ok++;code.println("\n/* ADDRESS: "+target+" NAME: "+clean(f.getName())+" */");code.println(r.getDecompiledFunction().getC());}
                else failed++;
                if(attempted%100==0){println("VIRTUAL_PROGRESS attempted="+attempted+" ok="+ok+" failed="+failed+" skipped="+skipped);code.flush();index.flush();}
            }
        }finally{decomp.dispose();}
        try(PrintWriter s=new PrintWriter(new File(dir,"virtual-method-summary.txt"),StandardCharsets.UTF_8)) {
            s.println("attempted="+attempted);s.println("decompiled="+ok);s.println("failed="+failed);s.println("skipped="+skipped);s.println("created="+created);
        }
        println("VIRTUAL_COMPLETE attempted="+attempted+" ok="+ok+" failed="+failed+" skipped="+skipped+" created="+created);
    }
}
