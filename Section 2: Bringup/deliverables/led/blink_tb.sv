module blink_tb;
    reg clk;
    wire led;

    blink dut (
        .clk(clk),
        .led(led)
        );
   
    initial clk = 0;
    always #5 clk <= ~clk;
  
    initial 
        begin
            $display("Running testbench...");
            $dumpfile("dump.vcd");
            $dumpvars(0);
            #30_000_000;
            $display("Done: made file dump.vcd");
            $finish;
        end
endmodule // blink_tb
