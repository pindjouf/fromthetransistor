# Building a UART -- copy a real UART

## 8250 UART

### Question 1 - What the fuck is a UART?

It's a device (IC) that converts data buses to serial and vice versa.

When transmitting: bus -> serial
When receiving: serial -> bus

### Question 2 - How does it do that?

Tx: Receives data from a CPU, memory or microcontroller -> Make a data packet by adding a start bit, parity bit and a stop bit -> send to other UART serially.
Rx: Receives data packet from UART -> decompose the packet (remove the control bits) -> send as a parallel data bus back to another device.

#### Data packets

The UART works with packets here's how they're formed:
You have your control bits which are outside your data frame, and then you have a data frame which is what actually holds the data being sent.

- 1 start bit
- a data frame -- 7 or 8
- 1 parity bit
- 1/2 stop bit(s)

### Question 3 - Main parts

#### Registers
- 
- 
- 

