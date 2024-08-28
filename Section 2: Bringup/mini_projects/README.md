# Mini projects

I've made this directory to stop procrastinating, I've been putting off making a UART for a month now just because every time I tried to do it the knowledge gap seemed to wide to even start anywhere.

So I asked ChatGPT to make a list of projects that will progressively challenge me until I feel comfortable making a UART.

This might be another excuse to procrastinate or the solution to the problem I guess the commits will tell the story better than I can.

## Course outline

- [x] **0. Make your LED blink at 5 Hz** -- [Async 2 kHz led blinker]() 

    - **Objective:** Modify your current LED blinker so that it blinks at a specific frequency of 5 Hz.
    - **Skills Gained:** Understanding of frequency manipulation, clock division, and how to control timing with precision.
    - **Why Important:** Manipulating clock frequencies is a fundamental skill in digital design. In more complex systems like UARTs, you'll need to generate precise timing signals, such as baud rates, from a higher frequency system clock. This project introduces you to these concepts on a simple, easy-to-understand level, providing a foundation for future projects involving timing and clock management.

- [ ] **1. Binary Counter**

    - **Objective:** Design a simple binary counter that increments on each clock pulse.
    - **Skills Gained:** Understanding of sequential logic, registers, and counters.
    - **Why Important:** UARTs often use counters to manage timing for baud rate generation and data framing.

- [ ] **2. PWM (Pulse Width Modulation) Generator**

    - **Objective:** Create a PWM generator that controls the brightness of an LED.
    - **Skills Gained:** Learn how to generate signals with varying duty cycles, which involves using counters and understanding timing.
    - **Why Important:** Working with PWM will give you experience with timing control, which is essential for UART baud rate generation.

- [ ] **3. Shift Register**

    - **Objective:** Implement an 8-bit shift register that can shift data left or right based on an input control signal.
    - **Skills Gained:** Understanding shift registers and serial data transmission.
    - **Why Important:** UARTs use shift registers to convert parallel data into serial data and vice versa.

- [ ] **4. Debounce Circuit**

    - **Objective:** Implement a debounce circuit for a push button.
    - **Skills Gained:** Handling noise and ensuring reliable signal interpretation, working with FSM (Finite State Machines).
    - **Why Important:** Reliable signal interpretation is crucial for UART communication, especially in noisy environments.

- [ ] **5. Simple FSM (Finite State Machine)**

    - **Objective:** Design a simple FSM that controls a sequence of LEDs based on button inputs.
    - **Skills Gained:** Working with state machines, understanding how to manage different states and transitions.
    - **Why Important:** UARTs are often implemented as state machines, with states for start bit detection, data reception, parity check, and stop bit detection.

- [ ] **6. Baud Rate Generator**

    - **Objective:** Design a baud rate generator that produces a clock signal at a specific frequency from a higher frequency clock.\
    - **Skills Gained:** Clock division, understanding of baud rate in serial communication.
    - **Why Important:** A key component of the UART is generating the correct timing for data transmission

- [ ] **7. Serial Data Transmission (TX)**

    - **Objective:** Implement a module that sends data serially from one pin.
    - **Skills Gained:** Data framing, timing control, and bit manipulation.
    - **Why Important:** This is half of what a UART does, so it’s a direct stepping stone.

- [ ] **8. Serial Data Reception (RX)**

    - **Objective:** Implement a module that receives serial data and converts it back into parallel data.
    - **Skills Gained:** Signal synchronization, start/stop bit detection, error checking.
    - **Why Important:** This complements the transmission module and completes the UART functionality.

- [ ] **9. UART Echo**

    - **Objective:** Combine the TX and RX modules to create a simple UART echo. The device should receive a byte of data and then immediately send it back.
    - **Skills Gained:** Integration of TX and RX, handling asynchronous communication.
    - **Why Important:** This project ties together all the concepts you've learned and is a simplified version of a full UART.

- [ ] **10. Complete UART**

    - **Objective:** Combine the previous modules into a fully functional UART with configurable baud rate, parity bit, and data bits.
    - **Skills Gained:** Full integration of all the components, handling edge cases, and ensuring reliable communication.
    - **Why Important:** This is your final goal and synthesizes everything you’ve learned.
