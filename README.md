# Project README

## Overview
The project appears to be a graphical application for rendering and updating a knowledge tree structure. It uses custom libraries for window engine and knowledge tree operations.

## Features
- Rendering of a knowledge tree structure.
- Updating the knowledge tree based on strokes (likely input from a stylus or mouse).
- Saving and loading the knowledge tree state from a YAML file.

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC)
- Make utility
- Standard development tools
- Libraries needed in specific projects:
  - WindowEngine1.0.h for window engine functionalities.
  - KnowledgeTree.h for knowledge tree operations.

## Build & Run
### Build Process
To build the project, navigate to the root directory and run:

```sh
make -f Makefile.(os) all
```

Replace `(os)` with `linux`, `windows`, `wine`, or `web` depending on your target platform. 

For a clean rebuild:

```sh
make -f Makefile.(os) clean
make -f Makefile.(os) all
```

### Execution
To execute the built application:

```sh
make -f Makefile.(os) exe
```

This will compile and run the project according to the specified makefile.