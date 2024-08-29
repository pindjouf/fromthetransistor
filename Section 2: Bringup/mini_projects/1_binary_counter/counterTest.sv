`timescale 1ns/100ps
module moduleTest;
    reg clk;
    reg [3:0] q_low, q_high;
    wire cout;

    counterUnit01 dut01 (
        .clk(clk),
        .q(q_low),
        .cout(cout)
        );
    
    counterUnit02 dut02 (
        .clk(clk),
        .q(q_high),
        .cin(cout)
        );

    always #5 clk = ~clk;

    initial begin
        clk = 0;
        $dumpfile("dump.vcd");
        $dumpvars;
        #3000;
        $finish;
    end
endmodule
