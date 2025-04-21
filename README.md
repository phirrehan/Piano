# Piano(SFML)

This is a simple Piano made using C++ with SFML library. Play the piano by building the code using the Makefile, or using an IDE.

## Installation Guide

SFML is a multi platform library. It can work on many platforms like Windows, MacOS, and Linux. See their respective sections for the installation process.

### Windows

You need to install and setup an IDE to compile the source code.

#### IDE

Install an IDE like Visual Studio or Code::Blocks.

#### SFML

Download the SFML SDK from this [link](https://www.sfml-dev.org/download/). Download the latest and stable version. Extract the archive to a location of your choice. It is recommended to keep the libraries in their seperate folders rather than copying them to IDE's directory.

#### Configuring IDE

If you are using Visual Studio, then see this [link](https://www.sfml-dev.org/tutorials/3.0/getting-started/visual-studio/#installing-sfml) for setting up SFML. Check this [link](https://www.sfml-dev.org/tutorials/3.0/getting-started/code-blocks/) if you're using Code::Blocks.

In case you do not use any of the aforementioned IDEs, refer to the their respective documentation for setting up SFML.

#### Compiling

Open main.cpp in the IDE of your choice. Compile and Run the program to play the piano.

### MacOS or Linux

Install the following dependencies using brew(MacOS) or distribution's package manager(Linux):

`git gcc sfml make`

> Note: package name for SFML could be different in your package manager's repository

If SFML 3 is unavailable in your package manager's repository, then refer to the SFML [documentation](https://www.sfml-dev.org/tutorials/3.0/getting-started/linux/#introduction).

Clone this repository using git and compile the source code

```
git clone https://github.com/phirrehan/TicTacToe.git
cd TicTacToe
make
```

Now run the binary file to play the piano

```
./main
```

## Sound

The piano uses a sound (placed in Sounds folder) for producing the sound of different notes. By default, this sound is set to C Note.mp3. It can be changed to Music Box.mp3 or Cat.mp3 for different sounds. This can be done by opening the main.cpp file on any text editor or an IDE and modifying the string in buffer constructor. It is located at line 5, just after the header files.

This piano uses Equal Temperament as its tuning system. The pitch of adjacent notes have common ratio of $\sqrt[12]{2}$. The C2 Note of this piano is the original sound. All the other sounds have been derived from that sound by multiplying/dividing the pitch by $\sqrt[12]{2}$.

## Controls

The sharp notes (with # in front of them) are the black keys, while the rest are the white keys.

| Note | Control                |
| ---- | ---------------------- |
| C1   | CapsLock               |
| C1#  | Tab                    |
| D1   | A                      |
| D1#  | Q                      |
| E1   | S                      |
| F1   | D                      |
| F1#  | E                      |
| G1   | F                      |
| G1#  | R                      |
| A1   | G                      |
| A1#  | T                      |
| B1   | H                      |
| C2   | J                      |
| C2#  | U                      |
| D2   | K                      |
| D2#  | I                      |
| E2   | L                      |
| F2   | Semicolon ;            |
| F2#  | P                      |
| G2   | Apostrophe '           |
| G2#  | Left Square Bracket [  |
| A2   | Backslash \            |
| A2#  | Right Square Bracket ] |
| B2   | M                      |
