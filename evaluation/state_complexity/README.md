# State complexity testing

This directory contains test programs and input data used to evaluate the state complexity of the generated parser. 
When running the test on chosen data, the program will visualize the results in a graph.

## Contents

Each test folder includes:

- Subfolders with testing grammars
    - Each subfolder contains grammars for different testing metric
- A main test program
- A `Makefile` for building and running the tests

## Additional requirements

This test folder uses the `matplotlib-cpp` library for visualization, which introduces additional dependencies beyond those listed in the main project README.

## Required Dependencies

Make sure the following are installed on your system:

- **Python 3**
- **Python development headers**
- **matplotlib**

## Installing Dependencies

### Ubuntu / Debian

```bash
sudo apt install python3 python3-dev python3-matplotlib
```

### Fedora

```bash
sudo dnf install python3 python3-devel python3-matplotlib 
```

## Compilation Notes

The Makefile automatically obtains the required Python include paths and linker flags using:

```bash
python3-config --includes
python3-config --embed --ldflags
```

Because of this, `python3-config` must also be available in your environment.

## Building

Compile the test program with:

```bash
make
```

## Running

For folders **simple** and **optional** choose which metric you want to test and the number of grammars you want to test it up to. Run the executable with:

```bash
./test chosen_folder number_of_grammars
```

For folder **json** just choose number of grammars between 1 and 3. Run the executable with:

```bash
./test number_of_grammars
```
