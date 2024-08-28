module moduleTest;
    wire clk;
    reg [7:0] count;

    counterUnit dut (
        .clk(clk),
        .count(count)
        );

    always #5 clk = ~clk;

    initial begin
        $dumpvars;
        $dumpfile("dump.vcd");
        #30_000_000;
        $finish;
    end
endmodule
