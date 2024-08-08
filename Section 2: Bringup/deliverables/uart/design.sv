module design (
    input [7:0] bus_in,
    input rx,
    output [7:0] bus_out,
    output tx
);
    
    assign tx = bus_in;
    assign rx = bus_out;

endmodule
