#include "definitions.h"
#include "reader.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>

template<class... Ts>
struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded(Ts...) -> overloaded<Ts...>;

Grammar expand(Grammar inputGrammar) {
    Grammar outputGrammar(inputGrammar);
    outputGrammar.rules = {};
    std::map<std::string, int> inputs;
    std::string input = "";
    int num = 0;

    for (Rule &rule : inputGrammar.rules) {
        if (rule.inputNonterminal != input) {
            input = rule.inputNonterminal;
            inputs.insert(make_pair(input, num));
            num++;
        }

        std::vector<Rule> newRules;
        Rule newRule(rule.inputNonterminal);
        newRules.push_back(newRule);

        for (auto &phrase : rule.rightSide) {
            std::vector<std::vector<std::string>> expanded = visit([&](auto &phrase){ return phrase.expand(); }, phrase);
            std::vector<Rule> oldRules = newRules;
            newRules = {};
            for (auto &option : expanded) {
                for (const Rule &oldRule : oldRules) {
                    Rule newRule(oldRule);
                    for (auto symbol : option) {
                        Symbol newSymbol(symbol);
                        newRule.rightSide.push_back(newSymbol);
                    }
                    newRules.push_back(newRule);
                }
            }
        }

        for (Rule &newRule : newRules) {
            if (find(outputGrammar.rules.begin(), outputGrammar.rules.end(), newRule) == outputGrammar.rules.end()) {
                outputGrammar.rules.push_back(newRule);
            }
        }
    }

    sort(outputGrammar.rules.begin(), outputGrammar.rules.end(), [&](const Rule &r1, const Rule r2){ 
        return inputs[r1.inputNonterminal] < inputs[r2.inputNonterminal]; 
    });

    return outputGrammar;
}

Grammar partialExpand(Grammar inputGrammar) {
    Grammar outputGrammar(inputGrammar);
    outputGrammar.rules = {};
    std::map<std::string, int> inputs;
    std::string input = "";
    int num = 0;

    for (Rule &rule : inputGrammar.rules) {
        if (rule.inputNonterminal != input) {
            input = rule.inputNonterminal;
            inputs.insert(make_pair(input, num));
            num++;
        }

        std::vector<Rule> newRules;
        Rule newRule(rule.inputNonterminal);
        newRules.push_back(newRule);

        for (auto &phrase : rule.rightSide) {
            visit(overloaded{ 
                [&](Symbol symbol){
                    for (auto &rule : newRules) {
                        rule.rightSide.push_back(symbol);
                    }
                },
                [&](PermPhrase &phrase){
                    std::vector<PermPhrase> expanded = phrase.partialExpand();
                    std::vector<Rule> oldRules = newRules;
                    newRules = {};
                    for (auto &perm : expanded) {
                        for (const Rule &oldRule : oldRules) {
                            Rule newRule(oldRule);
                            if (!perm.notProcessedPhrases.empty()) {
                                PermPhrase newPerm = PermPhrase(perm.notProcessedPhrases);
                                newRule.rightSide.push_back(perm);                                
                            }
                            newRules.push_back(newRule);
                        }
                    }
                }
            }, phrase);            
        }

        for (Rule &newRule : newRules) {
            if (find(outputGrammar.rules.begin(), outputGrammar.rules.end(), newRule) == outputGrammar.rules.end()) {
                outputGrammar.rules.push_back(newRule);
            }
        }
    }

    sort(outputGrammar.rules.begin(), outputGrammar.rules.end(), [&](const Rule &r1, const Rule r2){ 
        return inputs[r1.inputNonterminal] < inputs[r2.inputNonterminal]; 
    });

    return outputGrammar;
}

void writeExpanded(Grammar grammar, std::string fileName) {
    std::ofstream outputFile(fileName);
    outputFile << "%tokens\n\n";
    for (std::string token : grammar.terminals) {
        outputFile << token << " ";
    }
    outputFile << "\n\n%rules\n\n";

    std::string input = "";
    bool first = true;
    for (Rule &rule : grammar.rules) {
        if (first) {
            outputFile << rule.inputNonterminal << "\n\t: ";
            input = rule.inputNonterminal;
            first = false;
        } else if (input == rule.inputNonterminal) {
            outputFile << "\n\t| ";
        } else {
            outputFile << "\n\t;\n\n" << rule.inputNonterminal << "\n\t: ";
            input = rule.inputNonterminal;
        }

        for (auto &phrase : rule.rightSide) {
            visit(overloaded{ 
                [&](Symbol symbol){
                    outputFile << symbol.token << " ";
                },
                [&](PermPhrase &phrase){
                    std::cerr << "Error: grammar is not in expanded form.";
		            exit(EXIT_FAILURE);
                }
            }, phrase);
        }
    }
    outputFile << "\n\t;\n";

    outputFile.close();
}

void writePartialExpanded(Grammar grammar, std::string fileName) {
    std::ofstream outputFile(fileName);
    outputFile << "%tokens\n\n";
    for (std::string token : grammar.terminals) {
        outputFile << token << " ";
    }
    outputFile << "\n\n%rules\n\n";

    std::string input = "";
    bool first = true;
    for (Rule &rule : grammar.rules) {
        if (first) {
            outputFile << rule.inputNonterminal << "\n\t: ";
            input = rule.inputNonterminal;
            first = false;
        } else if (input == rule.inputNonterminal) {
            outputFile << "\n\t| ";
        } else {
            outputFile << "\n\t;\n\n" << rule.inputNonterminal << "\n\t: ";
            input = rule.inputNonterminal;
        }

        for (auto &phrase : rule.rightSide) {
            visit(overloaded{ 
                [&](Symbol symbol){
                    outputFile << symbol.token << " ";
                },
                [&](PermPhrase &phrase){
                    outputFile << "<< ";
                    for (int i=0; i<phrase.notProcessedPhrases.size(); i++) {
                        auto &sub = phrase.notProcessedPhrases[i];
                        for (auto [symbol, opt] : sub.symbols) {
                            outputFile << symbol << " ";
                        }
                        if (i != phrase.notProcessedPhrases.size()-1) {
                            outputFile << "|| ";
                        }
                    }
                    outputFile << ">> ";
                }
            }, phrase);
        }
    }
    outputFile << "\n\t;\n";

    outputFile.close();
}