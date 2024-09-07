`timescale 1ns/1ps

module sipoTest;

reg data_in;
reg clk;
reg [7:0] q;
int i;

sipoUnit dut (
    .data_in(data_in),
    .clk(clk),
    .q(q)
    );

always #5 clk = ~clk;
always #15 data_in = ~data_in;

initial clk = 0;
initial data_in = 0;

initial begin
    $dumpfile("dump.vcd");
    $dumpvars;
    for (i = 0; i < 100; i = i + 1) begin
        #100_000;
    end
    $finish;
end

endmodule
