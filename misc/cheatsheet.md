# Cheatsheet

This is gonna be a spot where I can freely put terms that I don't understand yet, and translate their *ROBOT* definition to something comprehensive for a novice such as myself.

It contains the `actual cheatsheet and the black box`, cheatsheet I don't have to explain but the black box is basically cheatsheet purgatory. It's for things I see and directly know I will have to write somewhere. It's a way to keep track of the things I'm lacking knowledge in, that could be important to know. I will often perform multiple iterations of simplifications when the subject is too complicated for me.

Anything that I don't understand, I will just put here to have something to assist me while reading through stuff that is currently too complex for me.\
If it looks like it's a prerequitite in the course that I DON'T have then it will be here!

## Actual Cheatsheet

### Intro

- **Truth table:** a diagram of the outputs from all possible combinations of input.

### Bringup

- **Serial communication:** Sending bits sequentially (one by one) from LSB to MSB, in contrast to parallel communication which sends them all at the same time.
- **Ternary operator:** Used to choose between two values with a simple conditional statement. Ex: `max = (x > y) ? x : y;` if the condition *(x > y)* is true then the operation will return x else it will return y, in this case max becomes one or the other.
- **Multiplexer:** It's a data selector, let's say you have an ATM and you need to determine what account *(output)* is going to show based on the customer id (input). When the customer id is 5 I want it to show account nr 5, in this example we're selecting the *bit/index* from vector *in* based on the *value* of the selector:

```systemverilog
module mux(input id[255:0], input sel[7:0], output account);
    assign account = id[sel];
endmodule
```

- **Registers:** A register is a digital circuit with two basic functions: data storage and data movement

### Misc

- **MSB-LSB:** Most significant bit is the one on the left, it's the opposite for LSB which is on the left.
- **Clock signal:** A logic beat, it determines the `rhythm` of signals. Ex: we add 1 on every clock cycle as long as posedge and reset != 1 at the same time. *q is a 4-bit reg.*

## Black Box

- **Parity bits:** 
- **Baud rate:** 
- **Flip flops:** 
- **Latch:** 

## Docs

### Verilog

- [Cool blog](https://lateblt.tripod.com/verilog.htm)
- [AMD docs](https://docs.amd.com/r/en-US/ug901-vivado-synthesis/Introduction?tocId=aE1Do~7cz0rNiUszTq1pbg)
- [Crazy informative thread](https://forum.digilent.com/topic/24547-help-uart-protocol-complete-but-basic-explanation-and-guides-from-newbie-perspective/)

## Exercises

HDLBits: [website](https://hdlbits.01xz.net)
