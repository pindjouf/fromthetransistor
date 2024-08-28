module counterUnit (
    input clk,
    output reg [7:0] count
);

always @ (posedge clk) begin
    if (count <= 254) begin
        count <= count + 1;
    end else begin
        count <= 0;
    end
end
    
endmodule
