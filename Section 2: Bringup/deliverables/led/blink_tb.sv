module blink_tb;
    reg clk;
    reg on;
    wire led;

    blink dut (
        .clk(clk),
        .on(on),
        .led(led)
        );
   
    initial clk = 0;
    initial on = 0;

    always #5 clk <= ~clk;
    always #10 on <= ~on;
  
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
