# Theory

## Transistors -> Integrated Circuits -> FPGAs -> LUTs

## Describe how FPGAs are buildable using transistors, and that ICs are just collections of transistors in a nice reliable package.

### Question 1 - What the fuck are transistors?

Often described as the main building block of electronics.\
They're a *semiconductor*[¹](#glossary) device who's goal is to control the flow of electrical current. There are two general types:

- Bipolar Junction Transistor (BJT)

    - Has three separately *doped* regions/terminals[²](#glossary) & two *junctions*[³](#glossary) 
    - Comes in **2** different types:
        - The ***npn*** BJT
        - The ***pnp*** BJT
        
    - Has **3** terminals:
        - Base
        - Collector (Positive lead)
        - Emitter (Negative lead)
   
- Field Effect Transistor (FET)

    - Has **4** terminals:
        - Source (Entry point)
        - Drain (Exit point)
        - Gate
        - Body

- metal-oxide-semiconductor field-effect transistor (MOSFET) - The most popular transistor

    - Has **4** terminals:
        - Source
        - Drain
        - Gate
        - Base

### Basic BJT Applications

#### Switch

When talking about digital circuits transistors can be in two states:

- On State (Conducting): Allows current to flow through, represents a binary `1`
    - **How does this happen?**
        - If the voltage increases so that the base-emitter junction gets *forward biased*[⁴](#Glossary) the transistor will turn on.

- Off State (Non-Conducting): Blocks current, represents a binary `0`
    - **How does this happen?**
        - If the voltage `v` is less than the voltage required to *forward bias*[⁴](#Glossary) the base-emitter junction then the current *I = 0* so the transistor is in the cutoff region/off.

#### Amplifier

When talking about analog circuits, you can use the transistor as an amplifier by increasing the voltage. Simple. Just don't get too crazy or you'll damage it.

##### Simple analogy

- **As a switch:** John (the transistor) is a lazy fuck. If you don't give him enough coffee he will literally sleep (cutoff region/off), but if you give him just enough he will be ready to work (active region/on).

- **As an amplifier:** I don't have one yet, fuck off. All I can think of is examples that are built FROM transistors! Stuff like guitar amps. -_-

### Question 2 - What the fuck are Integrated Circuits (ICs)?

Integrated circuits are basically contaiiiners of *discrete electronic components*[⁵](#Glossary)

There are four basic types of constructions in the manufacture of ICs, namely:

1. **mono-lithic (most used!!)**
2. thin-film
3. thick-film
4. hybrid

#### Characteristic(s) of a Monolithic IC

All circuit components and their inter-connections are formed on a single thin wafer called the substrate.

### Question 3 - What the fuck are Field Programmable Gate Arrays (FPGAs)?

In fact FPGAs are Integrated Circuits as well, with the main difference being that they're still programmable AFTER manufacturing, whereas traditional ICs are static in their configuration once they've been built.

Which allows for much more flexibility and makes them *hackable*.

### Question 4 - What the fuck are Lookup Tables (LUTs)?

Basically truth tables but used as memory.\
They look the same but they serve different functions.

So the input combinations are used as an address for instance if you have a 2-input LUT it'd be a 4-bit memory because the highest number you can reach with 2 bits is 3, *add* the 0 to that and you have 4-bit memory. This explanation probably only makes sense to me I'll have to polish it later. To get back to the example:

*f(A,B)* = *A + B* 

#### Truth table

| A | B | OUT |
| --------------- | --------------- | --------------- |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

#### Look-up table

| A | B | Address | Output (f(A,B)) |
| --------------- | --------------- | --------------- | --------------- |
| 0 | 0 | 00 | 0 |
| 0 | 1 | 01 | 1 |
| 1 | 0 | 10 | 1 |
| 1 | 1 | 11 | 1 |

## Glossary

1. **Semiconductors** are called that way because solid materials are categorized in two ways, they can either be `insulating` or `metallic`. Which basically stands as a proxy for `bad` or `good` at conducting current.\
Now you have some insulators that are better conductors than others, and that is why they're called ***semi***conductors.\
In metals the electrons aren't really bound to atomic nuclei, so a small amount of energy can push them easily.\
In insulators the electrons are fully bound to their nuclei so it takes a lot of energy to rip them away.\
In semiconductors they're still bound to the nuclei but they have some space to move as they please.

2. **Doping** is a process that allows us to make the number of free electrons go up (Phosphorous) or down (Boron) by adding impurities to the semiconductor material (sillicon)!\
Silicon doped with Phosphorous is called N-type and doped with Boron is called P-type (Because their outer atomic shells are more Negative or Positive).

3. **Junctions** are the boundaries between n and the p regions. They may be forward or reverse biased.

4. **Forward Bias-Reverse Bias** 

    - Forward Bias: Reduces the barrier and allows significant current to flow.
    - Reverse Bias: Increases the barrier and restricts current flow. (No current flow)

5. **Discrete Components** are single parts of electronic circuits with one dominant function, like: `Transistors`, `Diodes`, `Capacitors`, `Resistors`. Usually used in a context where you have to specify the difference between having separated components that are then connected through wires as opposed to having them all built together in an IC for instance.

#### Temporary
⁰¹²³⁴⁵⁶⁷⁸⁹
