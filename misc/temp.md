```systemverilog
// Simple hello world example:
initial $display("Hello, world!");

// Declaring a module looks like this:
module top_module (
    input a,
    output b
    );
endmodule

// Instantiation of a module looks like this:
module tb;
    wire a;
    reg b;

    top_module dut(
        .a(a),
        .b(b)
        );
endmodule

// Assigning signals looks like this:
assign b = a;

// Simple diagram of the module `top_module`:
// a->□->b

// Wires are just there to connect different elements, they are driven by continuous assign statements or module ports. 
//They can be thought of as physical wires.
wire a;

// Registers resemble traditional variables more since they store values in memory.
reg b;

// Buses or Vectors let you extend your ports or signals by giving them a range of n-bits.
// Their usually written from MSB to LSB although it doesn't really matter.
// Ex with an 8-bit input port:
input [7:0] hehe;

// Assign n-wire to an output:
assign out = hehe[4];

// Numbers in verilog can represented in multiple number systems like hex, octal, decimal or binary.
// The syntax is as follows:
// w'snnn
// w = width of digit(s) (how many bits it uses) 
// s = number system
// nnn = the actual numbers
// Binary example:
8'b01010101;

// Hex example:
2'h55;

// Decimal example:
2'd85;

// Octal example:
3'o125;
// Notice I've used the exact same value for each example.

// Operators:
// NOT = ~
// AND = &
// OR = |
// XOR = ^
// NOR = ~( x | y )
// NAND = ~( x & y )
// Logical Operators are the same as for any other programming language.

// IF statement is basically same as everywhere:
if (condition) begin
  // code to execute if true;
end else begin
  // code to execute if not true;
end

// Delays tell the program how many time units to wait before executing a line of code. Similar to the sleep command in shell.
#20; // code goes here;

// Always, is a procedural block. It can be used as a set of instruction or as a statement.
// Statement example:
always #5 clk = ~clk;

// Block example that tells the program to execute the code block whenever the stop signal is true:
always @(stop) begin
    // code goes here;
end

// More common block example that executes on the positive edge of a clock signal/cycle:
always @(posedge clk) begin
    // code goes here;
end
// I think of the always blocks as being if statements inside a while true.
```
