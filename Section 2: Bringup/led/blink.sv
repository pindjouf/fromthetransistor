module blink #(parameter g_COUNT_1HZ = 12500000) (input i_Clk, output reg o_LED = 1'b0);

    reg [31:0] r_Count_1Hz = 0;
  
    always @(posedge i_Clk) begin
        if (r_Count_1Hz == g_COUNT_1HZ) begin
            o_LED <= ~o_LED;
            r_Count_1Hz <= 0;
        end else begin
            r_Count_1Hz <= r_Count_1Hz + 1;
        end
    end
endmodule // blink
