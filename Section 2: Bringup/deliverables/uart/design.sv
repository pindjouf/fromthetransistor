module design (
    input [7:0] bus,
    input [7:0] rx,
    output [7:0] tx
);

    reg [7:0] rx_reg;
    reg [7:0] tx_reg;

    reg rx_ctrl_reg;
    reg tx_ctrl_reg;

    reg ctrl_reg;
    
endmodule
