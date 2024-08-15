# Cheatsheet

This is gonna be a spot where I can freely put terms that I don't understand yet, and translate their *ROBOT* definition to something comprehensive for a novice such as myself.

It contains the `actual cheatsheet and the black box`, cheatsheet I don't have to explain but the black box is basically cheatsheet purgatory. It's for things I see and directly know I will have to write somewhere. It's a way to keep track of the things I'm lacking knowledge in, that could be important to know. I will often perform multiple iterations of simplifications when the subject is too complicated for me.

Anything that I don't understand, I will just put here to have something to assist me while reading through stuff that is currently too complex for me.\
If it looks like it's a prerequitite in the course that I DON'T have then it will be here!

## Actual Cheatsheet

### Intro

- Truth table: a diagram of the outputs from all possible combinations of input.

### Bringup

- Serial communication: Sending bits sequentially (one by one) from LSB to MSB, in contrast to parallel communication which sends them all at the same time.

### Misc

- MSB-LSB: Most significant bit is the one on the left, it's the opposite for LSB which is on the left.
- Clock signal: A logic beat, it determines the `rhythm` of signals. Ex: we add 1 on every clock cycle as long as posedge and reset != 1 at the same time. *q is a 4-bit reg.*

## Black Box

- Parity bits: 
- Registers: 
- Baud rate: 
- Flip flops: 
- Latch: 

## Docs

Verilog: [verilog.htm](https://lateblt.tripod.com/verilog.htm)

## Exercises

HDLBits: [website](https://hdlbits.01xz.net)

## Where X=verilog
[my examples](url) 
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
