`timescale 1ns/1ps

module sipoTest;

reg data_in;
reg clk;
reg [3:0] q;

sipoUnit dut (
    .data_in(data_in),
    .clk(clk),
    .q(q)
    );

always #5 clk = ~clk;

bit data_in = 1;

initial begin
    $dumpfile("dump.vcd");
    $dumpvars;
    for (i = 0; i < 100; i = i + 1) begin
        #100_000;
    end
    $finish;
end

endmodule
