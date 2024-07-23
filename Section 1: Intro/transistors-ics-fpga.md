# Notes

## Describe how FPGAs are buildable using transistors, and that ICs are just collections of transistors in a nice reliable package.

### Question 1 - What the fuck are transistors?

Often described as the main building block of electronics.\
They're a *semiconductor*[¹](#glossary) device who's goal is to control the flow of electrical current. There are two general types:

- Bipolar Junction Transistor (BJT)

    - Has three separately *doped* regions[²](#glossary) & two *junctions*[³](#glossary) 
    - Comes in **2** different types:
        - The ***npn*** BJT
        - The ***pnp*** BJT
        
    - Has **3** terminals:
        - Base
        - Collector (Positive lead)
        - Emitter (Negative lead)
   
- Field Effect Transistor (FET)

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

5. **Discrete Components** are single parts of electronic circuits with one dominant function, like: `Transistors`, `Diodes`, `Capacitors`, `Resistors`.

#### Temporary
⁰¹²³⁴⁵⁶⁷⁸⁹
