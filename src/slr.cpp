#include "slr.h"
#include <algorithm>
#include <iostream>

template<class... Ts>
struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded(Ts...) -> overloaded<Ts...>;

std::map<std::string, std::set<std::string>> first(AugmentedGrammar &grammar) {
    std::map<std::string, std::set<std::string>> table;
    for (std::string t : grammar.terminals) {
        std::set<std::string> s = {t};
        table.insert(make_pair(t, s));
    }
    int sum = grammar.terminals.size();

    bool changed = true;
    while (changed) {
        for (Rule &rule : grammar.rules) {
			bool allHasEmpty = true;
            for (auto &phrase : rule.rightSide) {
                std::set<std::string> firsts = visit([&](auto &phrase){ return phrase.first(table); }, phrase);
                bool hasEmpty = false;
                for (std::string a : firsts) {
                    if (a != "") {
						table[rule.inputNonterminal].insert(a);
					} else {
						hasEmpty = true;
					}
                }
                if (!hasEmpty) {
					allHasEmpty = false;
					break;
				}
            }
            if (allHasEmpty) {
				table[rule.inputNonterminal].insert("");
			}
        }

        int newSum = 0;
        for (auto [symbol, first] : table) {
            newSum += first.size();
        }
        if (newSum <= sum) {
            changed = false;
        }
        sum = newSum;
    }

    return table;
}

std::set<std::string> first(Rule &rule, int position, std::map<std::string, std::set<std::string>> &table) {
    std::set<std::string> symbols;
    bool allHasEmpty = true;
    for (size_t i=position+1; i<rule.rightSide.size(); i++) {
        auto firsts = visit([&](auto &phrase){ return phrase.first(table); }, rule.rightSide[i]);
        bool hasEmpty = false;
        for (std::string a : firsts) {
            if (a != "") {
                symbols.insert(a);
            } else {
                hasEmpty = true;
            }
        }
        if (!hasEmpty) {
            allHasEmpty = false;
            break;
        }
    } 
    if (allHasEmpty) {
        symbols.insert("");
    }

    return symbols;
}

std::map<std::string, std::set<std::string>> follow(AugmentedGrammar &grammar, std::map<std::string, std::set<std::string>> &firstTable) {
    std::map<std::string, std::set<std::string>> followTable;
    for (std::string n : grammar.nonterminals) {
        followTable[n] = {};
    }
    followTable[grammar.initialRule.inputNonterminal].insert("$");

    int sum = 1;
    bool changed = true;
    while (changed) {
        for (Rule &rule : grammar.rules) {
            for (size_t i=0; i<rule.rightSide.size(); i++) {
                auto symbols = first(rule, i, firstTable);
                visit(overloaded{ 
                    [&](Symbol symbol){
                        if (find(grammar.nonterminals.begin(), grammar.nonterminals.end(), symbol.token) != grammar.nonterminals.end()) {
                            bool hasEmpty = false;
                            for (auto s : symbols) {
                                if (s != "") {
                                    followTable[symbol.token].insert(s);
                                } else {
                                    hasEmpty = true;
                                }
                            }
                            if (symbols.empty() || hasEmpty) {
                                for (std::string b : followTable[rule.inputNonterminal]) {
                                    followTable[symbol.token].insert(b);
                                }
                            }
                        }
                    },
                    [&](PermPhrase &phrase){
                        for (auto &x : phrase.notProcessedPhrases) {
                            auto tail = x.tail();
                            for (auto &y : phrase.notProcessedPhrases) {
                                if (!(x == y)) {
                                    auto head = y.head();
                                    for (std::string a : tail) {
                                        if (find(grammar.nonterminals.begin(), grammar.nonterminals.end(), a) != grammar.nonterminals.end()) {
                                            for (std::string b : head) {
                                                for (std::string c : firstTable[b]) {
                                                    if (c != "") {
                                                        followTable[a].insert(c);
                                                    }
                                                }
                                            }
                                        }                                    
                                    }
                                }
                            }
                            for (std::string a : tail) {
                                if (find(grammar.nonterminals.begin(), grammar.nonterminals.end(), a) != grammar.nonterminals.end()) {
                                    bool hasEmpty = false;
                                    for (auto s : symbols) {
                                        if (s != "") {
                                            followTable[a].insert(s);
                                        } else {
                                            hasEmpty = true;
                                        }
                                    }
                                    if (symbols.empty() || hasEmpty) {
                                        for (std::string b : followTable[rule.inputNonterminal]) {
                                            followTable[a].insert(b);
                                        }
                                    }
                                }                                    
                            }
                        }
                    }
                }, rule.rightSide[i]);
            }
        }

        int newSum = 0;
        for (auto [symbol, follow] : followTable) {
            newSum += follow.size();
        }
        if (newSum <= sum) {
            changed = false;
        }
        sum = newSum;
    }

    return followTable;
}

bool isReducable(Item &item) {
    if (item.dotPosition >= item.rightSide.size()) {
        return true;
    }
    for (size_t i=item.dotPosition; i<item.rightSide.size(); i++) {
        bool optional = visit([](auto &phrase){ return phrase.optional(); }, item.rightSide[i]);
        if (!optional) {
            return false;
        }
    }

    return true;
}

std::vector<std::map<std::string, std::pair<Action, std::pair<int, int>>>> actionTable(std::vector<State> &states, AugmentedGrammar &grammar, std::map<std::string, std::set<std::string>> &follow) {
    std::vector<std::map<std::string, std::pair<Action, std::pair<int, int>>>> table(states.size());

    for (size_t i=0; i<states.size(); i++) {
        for (std::string t : grammar.terminals) {
            if (states[i].transitions.find(t) != states[i].transitions.end()) {
                if (table[i].find(t) != table[i].end()) {
                    std::cerr << "Error: conflict in the parsing table on position [" << i << "," << t << "]. Conflicting actions are ";
                    std::cerr << "(shift " << t << ") and ";
                    if (table[i][t].first == shift) {
                        std::cerr << "(shift " << t << ")";
                    } else if (table[i][t].first == reduce) {
                        std::cerr << "(reduce rule " << table[i][t].second.first << ")";
                    } else {
                        std::cerr << "(accept)";
                    }
                    exit(EXIT_FAILURE);
                }
                table[i][t] = std::make_pair(shift, std::make_pair(states[i].transitions[t],0));
            }
        }

        for (Item &item : states[i].items) {
            if (isReducable(item)) {
                if (item.ruleNum == 0) {
                    table[i]["$"] = std::make_pair(accept, std::make_pair(0, 0));
                } else {
                    for (std::string b : follow[item.inputNonterminal]) {
                        if (table[i].find(b) != table[i].end()) {
                            std::cerr << "Error: conflict in the parsing table on position [" << i << "," << b << "]. Conflicting actions are ";
                            std::cerr << "(reduce rule " << item.ruleNum << ") and ";
                            if (table[i][b].first == shift) {
                                std::cerr << "(shift " << b << ")";
                            } else if (table[i][b].first == reduce) {
                                std::cerr << "(reduce rule " << table[i][b].second.first << ")";
                            } else {
                                std::cerr << "(accept)";
                            }
                            exit(EXIT_FAILURE);
                        }
                        table[i][b] = std::make_pair(reduce, std::make_pair(item.ruleNum, item.counter));
                    }                    
                }
            }
        }
    }

    return table;
}

std::vector<std::map<std::string, int>> gotoTable(std::vector<State> &states, AugmentedGrammar &grammar) {
    std::vector<std::map<std::string, int>> table(states.size());
    
    for (size_t i=0; i<states.size(); i++) {
        for (std::string n : grammar.nonterminals) {
            if (states[i].transitions.find(n) != states[i].transitions.end()) {
                table[i][n] = states[i].transitions[n];
            }
        }
    }

    return table;
}
