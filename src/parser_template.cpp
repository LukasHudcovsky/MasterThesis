#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
#include <map>

using namespace std;

enum Action {
	shift,
	reduce,
	accept
};

vector<map<string, pair<int, pair<int, int>>>> actionTable;
vector<map<string, int>> gotoTable;
vector<string> rules;

int run_parser(string fileName, string &errorMessage) {
    ifstream file(fileName);

    if(!file.is_open()) {
        return -1;
    }

    string token;
    stack<int> s;
    s.push(0);
    file >> token;

    while (true) {
        if (file.fail()) {
            token = "$";
        }
        if (actionTable[s.top()].find(token) != actionTable[s.top()].end()) {
            if (actionTable[s.top()][token].first == shift) {
                s.push(actionTable[s.top()][token].second.first);
                file >> token;
            } else if (actionTable[s.top()][token].first == reduce) {
                int rule = actionTable[s.top()][token].second.first;
                int num = actionTable[s.top()][token].second.second;
                string input = rules[rule];
                for (int i=0; i<num; i++) {
                    s.pop();
                }
                int newState = gotoTable[s.top()][input];
                s.push(newState);
            } else {
                file.close();
                return 0;
            }
        } else {
            errorMessage = "File could not be parsed. token: " + token + " state: " + to_string(s.top()) + "\n";
            file.close();
            return 1;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        cerr << "No file specified.\n";
        exit(EXIT_FAILURE);
    }
    if (argc > 2) {
        cerr << "Too many arguments.\n";
        exit(EXIT_FAILURE);
    }

    string file = argv[1];
    string message;

    int result = run_parser(file, message);

    if (result == -1) {
        cout << "Error while opening file: " << file << "\n";
    } else if (result == 1) {
        cout << message;
    } else {
        cout << "File succesfully parsed.\n";
    }
}