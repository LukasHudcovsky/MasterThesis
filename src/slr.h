#include "definitions.h"

enum Action {
	shift,
	reduce,
	accept
};

std::map<std::string, std::set<std::string>> first(AugmentedGrammar &grammar);

std::set<std::string> first(Rule &rule, int position, std::map<std::string, std::set<std::string>> &table);

std::map<std::string, std::set<std::string>> follow(AugmentedGrammar &grammar, std::map<std::string, std::set<std::string>> &firstTable);

bool isReducable(Item &item);

std::vector<std::map<std::string, std::pair<Action, std::pair<int, int>>>> actionTable(std::vector<State> &states, AugmentedGrammar &grammar, std::map<std::string, std::set<std::string>> &follow);

std::vector<std::map<std::string, int>> gotoTable(std::vector<State> &states, AugmentedGrammar &grammar);