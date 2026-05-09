#include "definitions.h"

std::vector<Item> Closure(std::vector<Item> &items, std::vector<Rule> &rules);

std::vector<Item> Goto(std::vector<Item> &items, std::string a, std::vector<Rule> &rules);

std::vector<State> Items(AugmentedGrammar grammar);

AugmentedGrammar augment(Grammar g);