// D flip-flops are created by the logic synthesizer when a clocked always block is used (See alwaysblock2). 
// A D flip-flop is the simplest form of "blob of combinational logic followed by a flip-flop" where the combinational logic portion is just a wire.

// Create a single D flip-flop. 

module top_module (
    input clk,
    input d,
    output reg q );

    always @ (posedge clk) begin
        q = d;
    end

endmodule
