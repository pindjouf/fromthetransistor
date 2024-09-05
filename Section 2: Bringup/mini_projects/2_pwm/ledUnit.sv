`timescale 1ns/1ps
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
    if (counter == 2500) begin
        reset <= 1;
    end else begin
        reset <= 0;
    end
    if (counter >= 1 && counter <= 2000) begin
        on = 1;
    end else begin
        on = 0;
    end
end

endmodule

