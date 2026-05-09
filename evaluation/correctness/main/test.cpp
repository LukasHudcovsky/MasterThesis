#include <iostream>
#include <fstream>

using namespace std;

extern FILE* yyin;

int run_parser_perm(string fileName, string &errorMessage);
int run_parser_expand(string fileName, string &errorMessage);

int yyparse(void);

int run_bison_parser(const char* fileName) {
    yyin = fopen(fileName, "r");
    if (!yyin) return -1;

    int result = yyparse();

    fclose(yyin);
    return result;
}

int main() {
    string error;
    string files[2] = {"correct_inputs.txt", "incorrect_inputs.txt"};
    string fileName = "input.txt";
    int i=0;

    for (string inputs : files) {
        ifstream file(inputs);
        string line;
        while (getline(file, line)) {
            if (line.find_first_not_of(" \t\r\n") == std::string::npos) {
                continue;
            }
            i++;
            cout << "test input number " << i << "\n";
            ofstream input(fileName);
            input << line;
            input.close();

            int result1 = run_parser_perm(fileName, error);
            int result2 = run_parser_expand(fileName, error);
            int result3 = run_bison_parser(fileName.c_str());

            if (result1 == -1 || result2 == -1 || result3 == -1) {
                cerr << "\nError reading input: " + line + "\n";
                exit(EXIT_FAILURE);
            } else if (result1 != result2) {
                cout << "\nTEST FAILED: parsers for permutation grammar and expanded grammar have different answers at input: " + line + "\n";
                return 0;
            } else if (result2 != result3) {
                cout << "\nTEST FAILED: bison parser and our parser have different answers at input: " + line + "\n";
                return 0;
            }           
        }
    }

    cout << "\nTESTS SUCCESFUL\n";
}