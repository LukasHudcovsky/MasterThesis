#include <fstream>
#include <regex>
#include <iostream>
#include "reader.h"

std::pair<std::string, bool> testOptional(std::string token) {
    std::regex test("^\\(.*\\)?$");
    bool optElem = false;
    std::string newToken;

    if (regex_match(token, test)) {
        newToken = token.substr(1, token.length() - 3);
        if (newToken.empty()) {
            std::cerr << "Error: optional element in permutation phrase cannot be empty.";
            exit(EXIT_FAILURE);
        }
        optElem = true;
    } else {
        newToken = token;
    }

    return make_pair(newToken, optElem);
}

std::pair<SubPhrase, bool> readSubPhrase(std::string token, std::ifstream &grammarFile, std::set<std::string> &symbols) {
    SubPhrase sub;
    bool optional = false;
    bool done = false;
    bool end;

    if (token == "(") {
        sub.isOptional = true;
        optional = true;
    } else {
        auto symbol = testOptional(token);
        sub.symbols.push_back(symbol);
        symbols.insert(symbol.first);
    }

    while (grammarFile >> token && token != ">>" && token != "||") {
        if (done || token == "(") {
            std::cerr << "Error: only the entire subphrase or a single token can be optional.";
		    exit(EXIT_FAILURE);
        } else if (token == ")?") {
            if (!optional) {
                std::cerr << "Error: missing beginning '(' for optional phrase.";
		        exit(EXIT_FAILURE);
            } else {
                optional = false;
                done = true;
            }
        } else {
            auto symbol = testOptional(token);
            sub.symbols.push_back(symbol);
            symbols.insert(symbol.first);
        }
    }

    if (optional) {
        std::cerr << "Error: missing closing ')?' for optional phrase.";
		exit(EXIT_FAILURE);
    }
    if (grammarFile.eof()) {
        std::cerr << "Error: unfinnished permutation phrase.";
	    exit(EXIT_FAILURE);
    }

    if (token == "||") {
        end = false;
    } else {
        end = true;
    }

    return std::make_pair(sub, end);
}

PermPhrase readPermPhrase(std::ifstream &grammarFile, std::set<std::string> &symbols) {
    std::vector<SubPhrase> phrases;
    std::string token;

    while (grammarFile >> token) {
        if (token == "||" || token == ">>") {
            std::cerr << "Error: element in permutation phrase cannot be empty.";
		    exit(EXIT_FAILURE);
        } else {
            auto res = readSubPhrase(token, grammarFile, symbols);
            phrases.push_back(res.first);
            if (res.second) {
                PermPhrase perm(phrases);
                return perm;
            }
        }
    }

    std::cerr << "Error: unfinnished permutation phrase.";
	exit(EXIT_FAILURE);
}

std::vector<Rule> readRules(std::string input, std::ifstream &grammarFile, std::set<std::string> &symbols) {
    std::vector<Rule> rules;
    Rule rule(input);

    std::string symbol;
    grammarFile >> symbol;
    if (symbol != ":") {
        std::cerr << "Error: missing ':' symbol for grammar rule.";
		exit(EXIT_FAILURE);
    }

    while (grammarFile >> symbol && symbol != ";") {
        if (symbol == "|") {
            rules.push_back(rule);
            rule = Rule(input);
            rule.inputNonterminal = input;
        } else if (symbol == "<<") {
            PermPhrase phrase = readPermPhrase(grammarFile, symbols);
            rule.rightSide.push_back(phrase);
        } else {
            Symbol s(symbol);
            rule.rightSide.push_back(s);
            symbols.insert(symbol);
        }
    }
    
    if (grammarFile.eof() && symbol != ";") {
        std::cerr << "Error: missing ending ';' symbol for grammar rule.";
		exit(EXIT_FAILURE);
    }

    rules.push_back(rule);
    return rules;
}

Grammar readGrammar(std::string fileName) {
    Grammar grammar;

    std::ifstream grammarFile(fileName);
    std::string word;
    grammarFile >> word;
    bool empty = true;

    if (word != "%tokens") {
        std::cerr << "Error: grammar missing the tokens section.";
		exit(EXIT_FAILURE);
    }

    while (grammarFile >> word && word != "%rules") {
        grammar.terminals.push_back(word);
        empty = false;
    }

    if (empty) {
        std::cerr << "Error: tokens section cannot be empty.";
		exit(EXIT_FAILURE);
    }
    if (word != "%rules") {
        std::cerr << "Error: grammar missing the rules section.";
		exit(EXIT_FAILURE);
    }

    bool initial = true;
    std::set<std::string> symbols;
    empty = true;

    while (grammarFile >> word) {
        grammar.nonterminals.push_back(word);
        if (initial) {
            initial = false;
            grammar.initialNonTerminal = word;
        }
        std::vector<Rule> rules = readRules(word, grammarFile, symbols);
        for (Rule &rule : rules) {
            if (find(grammar.rules.begin(), grammar.rules.end(), rule) == grammar.rules.end()) {
                grammar.rules.push_back(rule);
            } else {
                std::cerr << "Error: cannot have the same rule twice.";
		        exit(EXIT_FAILURE);              
            }
        }
        empty = false;
    }

    if (empty) {
        std::cerr << "Error: rules section cannot be empty.";
		exit(EXIT_FAILURE);
    }
    for (std::string s: symbols) {
        if (find(grammar.nonterminals.begin(), grammar.nonterminals.end(), s)==grammar.nonterminals.end() && 
            find(grammar.terminals.begin(), grammar.terminals.end(), s)==grammar.terminals.end()) {
            std::cerr << "Error: undefined token " + s + " in grammar rules.";
		    exit(EXIT_FAILURE);
        }
    }

    return grammar;
}
