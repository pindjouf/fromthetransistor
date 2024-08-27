module blink (
    input clk,
    input on,
    output reg led
);
    
always begin
    if (on) begin
        led = 1;
    end else begin
        led = 0;
    end
end
    
endmodule
