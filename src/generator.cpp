#include "definitions.h"
#include "slr.h"
#include "lr.h"
#include "reader.h"
#include <fstream>

int generate_parser(std::string fileName, std::string pathToTemplate) {
    Grammar grammar = readGrammar(fileName);
    AugmentedGrammar grammar2 = augment(grammar);

    std::vector<State> states = Items(grammar2);
    auto firstTable = first(grammar2);
    auto followTable = follow(grammar2, firstTable);

    auto tableAction = actionTable(states, grammar2, followTable);
    auto tableGoto = gotoTable(states, grammar2);

    std::vector<std::string> tokens = grammar2.terminals;
    tokens.push_back("$");

    std::string staticAction = "vector<map<string, pair<int, pair<int, int>>>> actionTable = { ";
    for (auto &map : tableAction) {
        staticAction += "{ ";
        for (auto [act, pair] : map) {
            std::string str = "{\"" + act + "\",{" + std::to_string(pair.first) + ",{" + std::to_string(pair.second.first) + "," + std::to_string(pair.second.second) + "}}},";
            staticAction += str;           
        }
        staticAction.pop_back();
        staticAction += "},";       
    }
    staticAction.pop_back();
    staticAction += "};";

    std::string staticGoto = "vector<map<string, int>> gotoTable = { ";
    for (auto &map : tableGoto) {
        staticGoto += "{ ";
        for (auto &pair : map) {
            std::string str = "{\"" + pair.first + "\"," + std::to_string(pair.second) + "},";
            staticGoto += str;
        }
        staticGoto.pop_back();
        staticGoto += "},";       
    }
    staticGoto.pop_back();
    staticGoto += "};";

    std::string rules = "vector<string> rules = { ";
    for (auto &rule : grammar2.rules) {
        std::string str = "\"" + rule.inputNonterminal + "\",";
        rules += str;
    }
    rules.pop_back();
    rules += "};";

    std::ifstream parser(pathToTemplate + "parser_template.cpp");
    std::vector<std::string> lines;
    std::string line;
    while (getline(parser, line)) {
        lines.push_back(line);
    }
    parser.close();

    lines[14] = staticAction;
    lines[15] = staticGoto;
    lines[16] = rules;

    std::ofstream newParser("parser.cpp");
    for (std::string line : lines) {
        newParser << line << "\n";
    }
    newParser.close();

    return states.size();
}