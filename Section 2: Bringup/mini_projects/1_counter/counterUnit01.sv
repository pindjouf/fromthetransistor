`timescale 1ns/100ps
module counterUnit01 (
    input clk,
    output reg cout,
    output reg [3:0] q
);

always @ (negedge clk) begin
    if (q == 4'b1111) begin
        q <= 4'b0000;
        cout = 1'b1;
    end else begin
        q <= q + 1'b1;
        cout = 1'b0;
    end
end

endmodule
