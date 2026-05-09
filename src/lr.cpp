#include <algorithm>
#include <iostream>
#include "lr.h"

std::vector<Item> Closure(std::vector<Item> &items, std::vector<Rule> &rules) {
    for (size_t i=0; i<items.size(); i++) {
        Item &item = items[i];
        std::set<std::string> head = item.head();
        for (size_t j=0; j<rules.size(); j++) {
            if(head.find(rules[j].inputNonterminal) != head.end()) {
                Item newItem(rules[j], j);
                if (find(items.begin(), items.end(), newItem) == items.end()) {
                    items.push_back(newItem);
                }
            }
        }
    }
    return items;
}

std::vector<Item> Goto(std::vector<Item> &items, std::string a, std::vector<Rule> &rules) {
    std::vector<Item> newItems;
    for (Item &item: items) {
        std::set<std::string> head = item.head();
        if (head.find(a) != head.end()) {
            try {
                Item newItem = item.step(a);
                if (find(newItems.begin(), newItems.end(), newItem) == newItems.end()) {
                    newItems.push_back(newItem);
                }
            } catch(const std::exception& e) {
                std::cerr << "No step on symbol " << e.what() << '\n';
            }            
        } 
    }

    return Closure(newItems, rules);
}

std::vector<State> Items(AugmentedGrammar grammar) {
    std::vector<State> states;
    Item firstItem(grammar.initialRule, 0);
    std::vector<Item> firstItems = {firstItem};
    std::vector<Item> firstState = Closure(firstItems, grammar.rules);
    states.push_back(State(firstState, 0));

    std::vector<std::string> symbols = grammar.nonterminals;
    symbols.insert(symbols.end(), grammar.terminals.begin(), grammar.terminals.end());

    for (size_t i=0; i<states.size(); i++) {
        for (std::string symbol: symbols) {
            auto items = Goto(states[i].items, symbol, grammar.rules);
            if (items.empty()) {
                continue;
            }
            
            State newState(items, states.size());
            auto it = find(states.begin(), states.end(), newState);
            if (it == states.end()) {
                states.push_back(newState);
                states[i].transitions.insert({symbol, newState.num});
            } else {
                states[i].transitions.insert({symbol, (*it).num});
            }
        }
    }

    return states;
}

AugmentedGrammar augment(Grammar g) {
    AugmentedGrammar g2;
    std::string newInitial = g.initialNonTerminal + '!';
    Rule r;
    r.inputNonterminal = newInitial;
    r.rightSide = {g.initialNonTerminal};
    g2.initialRule = r;
    g2.terminals = g.terminals;
    g2.nonterminals = g.nonterminals;
    g2.nonterminals.push_back(newInitial);
    g2.rules = {r};
    g2.rules.insert(g2.rules.end(), g.rules.begin(), g.rules.end());

    return g2;
}
