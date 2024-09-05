`timescale 1ns/1ps

module ledTest;
    reg clk;
    reg on;
    reg [31:0] counter;
    reg reset;
    wire led;

    ledUnit dut (
        .clk(clk),
        .counter(counter),
        .reset(reset),
        .on(on),
        .led(led)
        );

    integer i;

    always #5 clk <= ~clk;
  
    initial
        begin
            clk = 0;
            $dumpfile("dump.vcd");
            $dumpvars;
            for (i = 0; i < 100; i = i + 1) begin
                #100_000;
            end
            $finish;
        end
endmodule // blink_tb
