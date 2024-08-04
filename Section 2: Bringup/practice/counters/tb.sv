module tb;
    reg clk;
    reg reset;
    wire [3:0] q;

    count15 dut(
        .clk(clk),
        .reset(reset),
        .q(q)
        );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb);

        clk = 0;
        reset = 0;

        #10 reset = 1;
        #10 reset = 0;

        repeat(16) @(posedge clk);

        #10 reset = 1;
        #10 reset = 0;

        repeat(5) @(posedge clk);

        $finish;
    end
endmodule // tb
