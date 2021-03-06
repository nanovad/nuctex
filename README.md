#NuCTex
The Null C Text Engine is an attempt to create a singleplayer game engine in the
style of the Multi User Dungeons and text adventure games of the '80s and '90s.
The goal is to create a functional game as practice for an implementation of an
actual MUD engine in the future.

#Goals
The short-term goal is to create a game that is text-based in style and
execution but MUD-like in size and story detail.

The long-term goal is to create a fully functional engine from which any user
can create a game with locations, monsters, and puzzles to solve.

##Development Status
NuCTex went into alpha on January 5, 2016, and is now at version 0.1e

Due to school and work requirements, NuCTex is currently on an indefinite
hiatus.

###Update Status
Current version: 0.1f

Next planned version: 0.1g

Major changes in update: Undetermined 

###Current features
* Walk around in an exciting 4-tile world!
* Experience the ability to look at your surroundings (and other monsters!)
* Fight with the evil monsters that lurk about, and destroy them utterly!
* Properly quit the program!

###Commands?
For a list of commands and their description, look in the `commands.md` file.

##License?
NuCTex is licensed under the MIT license. A copy is provided in the `LICENSE`
file

#Installation
To compile NuCTex, you will need gcc. NuCTex uses C99 code, so it should work
any recent version of GCC.

##Linux
1. Download the repo with `git clone https://github.com/Nullsrc/nuctex`
2. Move into the repo with `cd nuctex`
3. Initialize the CMake project with `cmake .`
4. Compile with `make`
5. Run `./nuctex`

These steps have been tested with a computer running Debian 7 ARM and a computer
running 64-bit Arch Linux.
