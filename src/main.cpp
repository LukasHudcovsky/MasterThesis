#include "generator.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cerr << "No grammar file specified.\n";
        exit(EXIT_FAILURE);
    } 
    if (argc > 2) {
        std::cerr << " Only one grammar file can be passed.\n";
        exit(EXIT_FAILURE);
    }

    std::string fileName = argv[1];
    auto t1 = high_resolution_clock::now();
    int numOfStates = generate_parser(fileName, "");
    auto t2 = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(t2 - t1).count();

    std::cout << "Parser succesfully generated\n";
    std::cout << "Number of LR automaton states: " << numOfStates << "\n";
    std::cout << "Length of computation: " << duration << "ms\n";
}
