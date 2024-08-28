`timescale 1ns/100ps
module ledUnit (
    input clk,
    output reg on,
    output reg reset,
    output reg [31:0] counter,
    output reg led
);

assign led = on;

always @(posedge clk) begin
    if (!reset) begin
        counter <= counter + 1;
    end else begin
        counter <= 0;
    end
    if (counter == 100_000) begin
        reset <= 1;
    end else begin
        reset <= 0;
    end
    if (counter == 25_000 || counter == 75_000) begin
        on = 1;
    end else begin
        on = 0;
    end
end

endmodule

