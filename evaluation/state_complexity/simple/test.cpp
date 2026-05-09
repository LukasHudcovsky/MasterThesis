#include "../../../src/generator.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

int factorial(int n) {
    int fac = 1;
    for (int i = 2; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int expand_estimate(vector<int> phrases, vector<int> subphrases) {
    int sum = 0;
    for (size_t j=0; j<phrases.size(); j++) {
        int mul = 1;
        for (size_t i=0; i<j; i++) {
            mul *= factorial(phrases[i]);
        }
        int length = phrases[j];
        int fac = factorial(length);
        int res = 0;
        for (int i=1; i<=length; i++) {
            res += fac / factorial(length - i);
        }
        sum += (mul*res*subphrases[j]);
    }

    return sum;
}

int perm_estimate(vector<int> phrases, vector<int> subphrases) {
    int sum = 0;
    for (size_t i=0; i<phrases.size(); i++) {
        sum += (pow(2, phrases[i])-1 + (subphrases[i]-1)*phrases[i]*pow(2, phrases[i]-1));
    }

    return sum;
}

vector<vector<int>> testGrammars(string grammarsFolder, int number, vector<vector<int>> phrases, vector<vector<int>> subphrases) {
    string permGrammarFile;
    string expandGrammarFile;
    vector<int> permNum;
    vector<int> expandNum;
    vector<int> permEstimate;
    vector<int> expandEstimate;

    cout << "length\t" << "perm states\t" << "perm estimate\t" << "expand states\t" << "expand estimate\n";

    for (int i=1; i<=number; i++) {
        string permGrammarFile = grammarsFolder + "/perm_grammar" + to_string(i) + ".txt";
        string expandGrammarFile = grammarsFolder + "/expand_grammar" + to_string(i) + ".txt";

        int permStates = generate_parser(permGrammarFile, "../../../src/");
        int expandStates = generate_parser(expandGrammarFile, "../../../src/");
        int permEst = perm_estimate(phrases[i-1], subphrases[i-1]);
        int expandEst = expand_estimate(phrases[i-1], subphrases[i-1]);

        permNum.push_back(permStates);
        expandNum.push_back(expandStates);
        permEstimate.push_back(permEst);
        expandEstimate.push_back(expandEst);
        cout << i << "\t" << permStates << "\t\t" << permEst << "\t\t" << expandStates << "\t\t" << expandEst << "\n";
    }

    return {permNum, expandNum, permEstimate, expandEstimate};
}

void plot_graph(vector<vector<int>> numOfStates, vector<int> indexes, int type) {
    string xlabel;
    if (type == 0) {
        xlabel = "dĺžka permutačnej frázy v pravidle gramatiky";
    } else if (type == 1) {
        xlabel = "dĺžka druhej permutačnej frázy v pravidle gramatiky";
    } else {
        xlabel = "dĺžka permutačných fráz v pravidle gramatiky";
    }
    plt::named_plot("teoretický výpočet pre perm. gramatiku", indexes, numOfStates[2], "orange");
    plt::named_plot("teoretický výpočet pre expand. gramatiku", indexes, numOfStates[3], "blue");  
    plt::named_plot("perm. gramatika", indexes, numOfStates[0], "green");
    plt::named_plot("expand. gramatika", indexes, numOfStates[1], "red");
    plt::xlabel(xlabel);
    plt::ylabel("počet stavov položkového automatu");
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
    string folder = argv[1];
    int number = stoi(argv[2]);
    
    int length = 1;
    int type = 0;
    vector<int> indexes;
    vector<vector<int>> phrases; 
    vector<vector<int>> subphrases;
    for (int i=1; i<=number; i++) {
        indexes.push_back(i);
        phrases.push_back({});
        subphrases.push_back({});
    }

    if (folder == "simple_subphrases/length2") {
        length = 2;
    } else if (folder == "simple_subphrases/length3") {
        length = 3;
    } else if (folder == "multiple_perm_phrases/length2") {
        for (int i=1; i<=number; i++) {
            phrases[i-1].push_back(2);
            subphrases[i-1].push_back(1);
        }
        type = 1;
    } else if (folder == "multiple_perm_phrases/length3") {
        for (int i=1; i<=number; i++) {
            phrases[i-1].push_back(3);
            subphrases[i-1].push_back(1);
        }
        type = 1;
    } else if (folder == "multiple_perm_phrases/length4") {
        for (int i=1; i<=number; i++) {
            phrases[i-1].push_back(4);
            subphrases[i-1].push_back(1);
        }
        type = 1;
    } else if (folder == "multiple_perm_phrases/triple") {
        for (int i=1; i<=number; i++) {
            phrases[i-1].push_back(i);
            phrases[i-1].push_back(i);
            subphrases[i-1].push_back(1);
            subphrases[i-1].push_back(1);
        }
        type = 2;
    }

    for (int i=1; i<=number; i++) {
        phrases[i-1].push_back(i);
        subphrases[i-1].push_back(length);
    }

    vector<vector<int>> numOfStates = testGrammars(folder, number, phrases, subphrases);
    plot_graph(numOfStates, indexes, type);
}