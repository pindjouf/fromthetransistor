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

### Misc

- **MSB-LSB:** Most significant bit is the one on the left, it's the opposite for LSB which is on the left.
- **Clock signal:** A logic beat, it determines the `rhythm` of signals. Ex: we add 1 on every clock cycle as long as posedge and reset != 1 at the same time. *q is a 4-bit reg.*

## Black Box

- **Parity bits:** 
- **Registers:** 
- **Baud rate:** 
- **Flip flops:** 
- **Latch:** 
- **Multiplexer:** 

## Docs

Verilog: [verilog.htm](https://lateblt.tripod.com/verilog.htm)

## Exercises

HDLBits: [website](https://hdlbits.01xz.net)
