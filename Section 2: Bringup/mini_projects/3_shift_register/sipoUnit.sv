`timescale 1ns/1ps

module sipoUnit (
    reg data_in,
    reg clk,
    reg [3:0] q
);

    dff dff0 (
        .d(data_in),
        .clk(clk),
        .q(q[0])
        );
    
    dff dff1 (
        .d(q[0]),
        .clk(clk),
        .q(q[1])
        );

    dff dff2 (
        .d(q[1]),
        .clk(clk),
        .q(q[2])
        );

    dff dff3 (
        .d(q[2]),
        .clk(clk),
        .q(q[3])
        );
endmodule

module dff (
    input d,
    input clk,
    output reg q
);

always @ (posedge clk) begin
    q = d;
end
    
endmodule
