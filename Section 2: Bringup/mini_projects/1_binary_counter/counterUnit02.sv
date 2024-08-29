`timescale 1ns/100ps
module counterUnit02 (
    input clk,
    input cin,
    output reg [3:0] q
);

always @ (negedge clk) begin
    if (cin) begin
        if (q == 4'b1111) begin
            q <= 1'b0;
        end else begin
            q <= q + 1'b1;
        end
    end
end

endmodule
