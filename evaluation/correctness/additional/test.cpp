#include <iostream>

using namespace std;

extern FILE* yyin;

int run_parser(string fileName, string &errorMessage);

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
    for (int i = 1; i<=50; i++) {
        cout << "test input number " << i << "\n";
        string fileName = "inputs/input_" + to_string(i) + ".txt";
        
        int result1 = run_parser(fileName, error);
        int result2 = run_bison_parser(fileName.c_str());
        

        if (result1 == -1 || result2 == -1) {
            cerr << "\nError reading file: " + fileName + "\n";
            exit(EXIT_FAILURE);
        } else if (result1 != result2) {
            cout << "\nTEST FAILED: parsers have different answers at input file " + fileName + "\n";
            return 0;
        } 
    }

    cout << "\nTESTS SUCCESFUL\n";
}