#include "../../../src/generator.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cerr << "Number of grammars not specified.\n";
        exit(EXIT_FAILURE);
    }
    if (argc > 2) {
        cerr << "Too many arguments.\n";
        exit(EXIT_FAILURE);
    }
    int number = stoi(argv[1]);

    for (int i=0; i<number; i++) {
        string permGrammarFile = "json_examples/perm_grammar" + to_string(i) + ".txt";
        string expandGrammarFile = "json_examples/expand_grammar" + to_string(i) + ".txt";

        int expandStates = generate_parser(expandGrammarFile, "../../../src/");
        int permStates = generate_parser(permGrammarFile, "../../../src/");

        cout << "example " << i << ":\tperm_states: " << permStates  << " \texpand_states: " << expandStates << "\n";
    }
}