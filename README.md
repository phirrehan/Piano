# Piano(SFML)

This is a simple Piano made using C++ with SFML library. Play the piano by compiling the code with cmake.

https://github.com/user-attachments/assets/c437b10b-00d0-497b-a0c4-4b328d4387f7

# Dependencies

- C++ Compiler 
- CMake

# Usage Guide

## Download Source Code

Download the source code from the github repository or using git:

```
git clone https://github.com/phirrehan/Piano.git
```

## Compile

Open root of project in terminal/powershell. Run the following command in root of project:
> Ensure you have the C++ compiler and cmake in PATH environment variable.

```
mkdir build
cd build
cmake ..
cmake --build .
```

## Run Binary

After successful compilation, execute the `Piano` file in `build` directory. Using command line, this can be done with `./Piano` or `.\Piano` for Linux/MacOS and Windows respectively.

# Sound

The piano uses a sound (placed in Sounds folder) for producing the sound of different notes. By default, this sound is set to `Acoustic.mp3`. It can be changed to `Music Box.mp3` or `Cat.mp3` for different sounds. This can be done by opening `main.cpp` on any text editor or an IDE and modifying the string in constructor of buffer. It is located below the header files(at line 5).

## Brief Music Theory

This piano uses Equal Temperament as its tuning system. The pitch of adjacent notes have common ratio of $\sqrt[12]{2}$. The C2 Note of this piano is the original sound. All the other sounds have been derived from that sound by multiplying/dividing the pitch by $\sqrt[12]{2}$.

# Controls

The sharp notes (with # in front of them) are the black keys, while the rest are the white keys.

| Note | Control  |
| ---- | -------- |
| C1   | CapsLock |
| C1#  | Tab      |
| D1   | A        |
| D1#  | Q        |
| E1   | S        |
| F1   | D        |
| F1#  | E        |
| G1   | F        |
| G1#  | R        |
| A1   | G        |
| A1#  | T        |
| B1   | H        |
| C2   | J        |
| C2#  | U        |
| D2   | K        |
| D2#  | I        |
| E2   | L        |
| F2   | ;        |
| F2#  | P        |
| G2   | '        |
| G2#  | [        |
| A2   | \        |
| A2#  | ]        |
| B2   | M        |
