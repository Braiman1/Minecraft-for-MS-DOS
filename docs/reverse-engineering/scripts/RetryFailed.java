// @category ReverseEngineering
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;

public class RetryFailed extends GhidraScript {
    public void run() throws Exception {
        File dir=new File(getScriptArgs()[0]); File retry=new File(dir,"retries");retry.mkdirs();
        DecompInterface decomp=new DecompInterface();decomp.toggleCCode(true);decomp.toggleSyntaxTree(false);decomp.openProgram(currentProgram);
        int ok=0,failed=0;
        try(PrintWriter index=new PrintWriter(new File(dir,"retry-status.tsv"),StandardCharsets.UTF_8)) {
            index.println("address\tname\tstatus\tmessage");
            for(String line:Files.readAllLines(new File(dir,"functions.tsv").toPath(),StandardCharsets.UTF_8)) {
                String[] cols=line.split("\t",-1);if(cols.length<4 || !cols[3].equals("failed"))continue;
                Function f=currentProgram.getFunctionManager().getFunctionAt(toAddr(cols[0]));
                if(f==null){failed++;index.println(cols[0]+"\t"+cols[1]+"\tfailed\tFunction absent");continue;}
                println("RETRY "+cols[0]); DecompileResults r=decomp.decompileFunction(f,120,monitor);
                boolean success=r.decompileCompleted() && r.getDecompiledFunction()!=null;
                index.println(cols[0]+"\t"+cols[1]+"\t"+(success?"ok":"failed")+"\t"+String.valueOf(r.getErrorMessage()).replace('\n',' ').replace('\t',' '));index.flush();
                if(success){ok++;try(PrintWriter code=new PrintWriter(new File(retry,cols[0]+".c"),StandardCharsets.UTF_8)) {code.println("\n/* ADDRESS: "+cols[0]+" NAME: "+cols[1]+" */");code.println(r.getDecompiledFunction().getC());}}
                else failed++;
            }
        }finally{decomp.dispose();}
        println("RETRY_COMPLETE ok="+ok+" failed="+failed);
    }
}
