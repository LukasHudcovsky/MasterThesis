# Modified LR Parser Generator

This project implements a modified LR parser generator that extends the standard LR parsing algorithm with support for **permutation phrases**. 
The implementation was developed as part of a master's thesis focused on extending parser generation techniques and evaluating their correctness and behavior.

The repository contains the parser generator implementation together with multiple testing directories used for validation and experimentation.

---

## Project Structure

```text
.
├── src/                # Source code of the parser generator
├── evaluation/         # Test programs and evaluation data
├── licences/           # Licences for third-party software
├── LICENCE
└── README.md
```

Some subdirectories contain their own `README.md` files with additional instructions and dependencies.

---

## Requirements

The project was developed and tested on Linux systems.

## Required Tools

- Linux distribution
- `g++` with C++17 support
- `make`

---

## Building

To compile the main project, go to the src directory and run:

```bash
make
```

---

## Running

After successful compilation, prepare your input_grammar file, you want to generate parser for and run:

```bash
./main input_grammar
```
As a result, file parser.cpp will be created. You can compiile and run the file with standars commands:
```bash
g++ parser.cpp -o parser
```
```bash
./parser input_file_for_parser
```

---

## Cleaning Build Files

To remove the generated binary file `main`:

```bash
make clean
```

## Third-party software

This project includes `matplotlib-cpp` by Benno Evers:
https://github.com/lava/matplotlib-cpp

`matplotlib-cpp` is licensed under the MIT License.

A copy of the license is available in:
licenses/matplotlib-cpp-MIT.txt
