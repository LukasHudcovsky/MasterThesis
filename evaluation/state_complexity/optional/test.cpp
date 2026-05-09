#include "../../../src/generator.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

vector<vector<int>> testOptionals(string folder, int number) {
    vector<vector<int>> results;

    for (int i=1; i<=number; i++) {
        string grammarsFolder = folder + "/length" + to_string(i);
        vector<int> differences;

        cout << "length: " << i << "\n";
        cout << "optionals\t" << "perm states\t" << "expand states\t" << "difference\n";
        for (int j=0; j<=i; j++) {
            string permGrammarFile = grammarsFolder + "/perm_grammar" + to_string(j) + ".txt";
            string expandGrammarFile = grammarsFolder + "/expand_grammar" + to_string(j) + ".txt";

            int permStates = generate_parser(permGrammarFile, "../../../src/");
            int expandStates = generate_parser(expandGrammarFile, "../../../src/");

            differences.push_back(expandStates - permStates);

            cout << j << "\t\t" << permStates << "\t\t" << expandStates << "\t\t" << expandStates-permStates << "\n";
        }
        results.push_back(differences);
    }

    return results;
}

void plot_optionals(vector<vector<int>> diffOfStates, int number, vector<vector<int>> indexes, bool simple, bool partial) {
    string graphLabel;
    string xlabel;
    if (simple) {
        xlabel = "počet voliteľných prvkov v permutačnej fráze";
        graphLabel = "dĺžka perm. frázy ";
    } else {
        xlabel = "počet voliteľných prvkov v podfráze";
        graphLabel = "dĺžka podfrázy ";
    }

    string expand = "expandovanú";
    if (partial) {
        expand = "čiastočne expandovanú";
    }

    for (int i=number-1; i>=0; i--) {
        string label = graphLabel + to_string(i+1);
        plt::named_plot(label, indexes[i], diffOfStates[i]);
    }
    
    plt::xlabel(xlabel);
    plt::ylabel("rozdiel stavov pre " + expand + " a permutačnú gramatiku");
    plt::legend();
    plt::show();
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cerr << "No folder specified.\n";
        exit(EXIT_FAILURE);
    } 
    if (argc == 2) {
        cerr << "Number of grammars not specified.\n";
        exit(EXIT_FAILURE);
    }
    if (argc > 3) {
        cerr << "Too many arguments.\n";
        exit(EXIT_FAILURE);
    }
    string grammarsFolder = argv[1];
    int number = stoi(argv[2]);

    vector<string> optionals = {"simple_optionals_expand1", "simple_optionals_partial1", "simple_optionals_expand2", "simple_optionals_partial2", "complex_optionals"};

    if (find(optionals.begin(), optionals.end(), grammarsFolder) != optionals.end()) {
        vector<vector<int>> indexes;
        for (int i=1; i<=number; i++) {
            vector<int> subIndexes;
            for (int j=0; j<=i; j++) {
                subIndexes.push_back(j);
            }
            indexes.push_back(subIndexes);
        }

        bool simple = true;
        bool partial = false;
        if (grammarsFolder == "complex_optionals") {
            simple = false;
        } else if (grammarsFolder == "simple_optionals_partial1" || grammarsFolder == "simple_optionals_partial2") {
            partial = true;
        }

        vector<vector<int>> diffOfStates = testOptionals(grammarsFolder, number);
        plot_optionals(diffOfStates, number, indexes, simple, partial);

    } else {
        cout << "WRONG FOLDER!\n";
    }
}