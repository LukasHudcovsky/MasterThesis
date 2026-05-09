#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <variant>
#include "helpers.h"

#pragma once

enum StepResult {
	SuccessStay,
	SuccessMove,
	Fail
};

class SubPhrase {
	public:
		bool isOptional;
		std::vector<std::pair<std::string, bool>> symbols;
		size_t dotPosition;
		SubPhrase(){
			this->symbols = {};
			this->isOptional = false;
			this->dotPosition = 0;			
		}
		SubPhrase(std::vector<std::string> &symbols){
			this->symbols = {};
			for (std::string symbol : symbols) {
				auto pair = make_pair(symbol, false);
				this->symbols.push_back(pair);
			}
			this->isOptional = false;
			this->dotPosition = 0;			
		}
		bool operator < (const SubPhrase &m) const {
			if (symbols < m.symbols) return true;
			if (symbols == m.symbols && dotPosition < m.dotPosition) return true;
			if (symbols == m.symbols && dotPosition == m.dotPosition && isOptional < m.isOptional) return true;
			return false;
		}
		bool operator == (const SubPhrase &m) const {
			return isOptional == m.isOptional &&
				symbols == m.symbols &&
				dotPosition == m.dotPosition;
		}
		bool optional() {
			if (isOptional && dotPosition == 0) return true;
			for (auto it = symbols.begin() + dotPosition; it != symbols.end(); it++) {
				if (!(*it).second) return false;
			}
			return true;
		}
		std::set<std::string> head() {
			std::set<std::string> options = {};
			for (auto it = symbols.begin() + dotPosition; it != symbols.end(); it++) {
				std::pair<std::string, bool> symbol = *it;
				insert(options, symbol.first);
				if (!symbol.second) break;
			}

			return options;
		}
		std::set<std::string> tail() {
			std::set<std::string> options = {};
			for (auto it = symbols.rbegin(); it != symbols.rend(); it++) {
				std::pair<std::string, bool> symbol = *it;
				insert(options, symbol.first);
				if (!symbol.second) break;
			}

			return options;
		}
		StepResult step(std::string a) {
			for (size_t i=dotPosition; i < symbols.size(); i++) {
				if (symbols[i].first==a) {
					dotPosition = i+1;
					if (dotPosition < symbols.size()) {
						return SuccessStay;
					} else {
						return SuccessMove;
					}
				} 
				if (!symbols[i].second) {
					return Fail;
				}
			}
			return Fail;
		}
		std::set<std::string> first(std::map<std::string, std::set<std::string>> &table) {
			std::set<std::string> result;
			bool allHasEmpty = true;
			for (auto symbol : symbols) {
				std::set<std::string> firsts = table[symbol.first];
				bool hasEmpty = symbol.second;
				for (std::string a : firsts) {
					if (a != "") {
						result.insert(a);
					} else {
						hasEmpty = true;
					}
				}
				if (!hasEmpty) {
					allHasEmpty = false;
					break;
				}
			}
			if (isOptional || allHasEmpty) {
				result.insert("");
			}	
			
			return result;
		}
		std::vector<std::vector<std::string>> expand() {
			std::vector<std::vector<std::string>> options;
			options.push_back({});
			for (auto [symbol, opt] : symbols) {
				if (!opt) {
					for (auto &option : options) {
						option.push_back(symbol);
					}
				} else {
					auto newOptions = options;
					for (auto &option : newOptions) {
						option.push_back(symbol);
						options.push_back(option);
					}
				}
			}
			if (isOptional && !options.front().empty()) {
				options.push_back({});
			}
			return options;
		}
};

class Symbol {
	public:
		std::string token;

		Symbol(std::string token) {
			this->token = token;
		}
		bool operator == (const Symbol &s) const {
			return token == s.token;
		}
		bool optional() {
			return false;
		}
		std::set<std::string> head() {
			return {token};
		}
		StepResult step(std::string a) {
			if(token == a) {
				return SuccessMove;
			} else {
				return Fail;
			}
		}
		std::set<std::string> first(std::map<std::string, std::set<std::string>> &table) {
			return table[token];
		}
		std::vector<std::vector<std::string>> expand() {
			return {{token}};
		}
};

class PermPhrase {
	public:
		std::vector<SubPhrase> processedPhrases;
		std::vector<SubPhrase> notProcessedPhrases;

		SubPhrase currentPhrase;
		bool hasCurrentPhrase;
		PermPhrase(){}
		PermPhrase(std::vector<SubPhrase> &phrases) {
			this->processedPhrases = {};
			this->notProcessedPhrases = phrases;
			this->hasCurrentPhrase = false;
		}
		bool operator == (const PermPhrase &p) const {
			auto p1 = processedPhrases;
			auto p2 = p.processedPhrases;
			auto n1 = notProcessedPhrases;
			auto n2 = p.notProcessedPhrases;
			sort(p1.begin(), p1.end());
			sort(p2.begin(), p2.end());
			sort(n1.begin(), n1.end());
			sort(n2.begin(), n2.end());
			return p1 == p2 &&
				n1 == n2 &&
				hasCurrentPhrase == p.hasCurrentPhrase &&
				(!hasCurrentPhrase || currentPhrase == p.currentPhrase);
		}
		bool optional() {
			if (hasCurrentPhrase && !currentPhrase.optional()) return false;

			for (auto &phrase: notProcessedPhrases) {
				if (!phrase.optional()) return false;
			}
			return true;
		}
		std::set<std::string> head() {
			std::set<std::string> options;
			if (hasCurrentPhrase) {
				std::set<std::string> subHead = currentPhrase.head();
				for (auto symbol: subHead) {
					insert(options, symbol);
				}
			}
			if (!hasCurrentPhrase || currentPhrase.optional()) {
				for (size_t i=0; i<notProcessedPhrases.size(); i++) {
					auto phrase = notProcessedPhrases[i];
					bool duplicate = false;
					for (size_t j=0; j<i; j++) {
						if (phrase == notProcessedPhrases[j]) {
							duplicate = true;
							break;
						}
					}
					if (duplicate) continue;
					std::set<std::string> subHead = phrase.head();
					for (auto symbol: subHead) {
						insert(options, symbol);
					}
				}
			}
			return options;
		}
		StepResult step(std::string a) {
			if (hasCurrentPhrase) {
				bool optionalPhrase = currentPhrase.optional();
				StepResult res = currentPhrase.step(a);
				if (res == SuccessStay) {
					return SuccessStay;
				} else if (res == SuccessMove) {
					processedPhrases.push_back(currentPhrase);
					hasCurrentPhrase = false;
					if (!notProcessedPhrases.empty()) {
						return SuccessStay;
					} else {
						return SuccessMove;
					}
				} else if (optionalPhrase) {
					processedPhrases.push_back(currentPhrase);
					hasCurrentPhrase = false;
				} else {
					return Fail;
				}
			}
			for (auto it = notProcessedPhrases.begin(); it != notProcessedPhrases.end(); it++) {
				auto subPhrase = *it;
				std::set<std::string> subHead = subPhrase.head(); 
				if (subHead.find(a) != subHead.end()) {
					notProcessedPhrases.erase(it);
					StepResult res = subPhrase.step(a);
					if (res == SuccessStay) {
						currentPhrase = subPhrase;
						hasCurrentPhrase = true;
						return SuccessStay;
					} else if (res == SuccessMove) {
						processedPhrases.push_back(subPhrase);
						if (!notProcessedPhrases.empty()) {
							return SuccessStay;
						} else {
							return SuccessMove;
						}
					}
				}
			}
			return Fail;
		}
		std::set<std::string> first(std::map<std::string, std::set<std::string>> &table) {
			std::set<std::string> result;
			bool allHasEmpty = true;
			for (auto &phrase : notProcessedPhrases) {
				std::set<std::string> firsts = phrase.first(table);
				bool hasEmpty = false;
				for (std::string a : firsts) {
					if (a != "") {
						result.insert(a);
					} else {
						hasEmpty = true;
					}
				}
				if (!hasEmpty) {
					allHasEmpty = false;
				}
			}
			if (optional() || allHasEmpty) {
				result.insert("");
			}

			return result;
		}
		std::vector<std::vector<std::string>> expand() {
			std::vector<std::vector<std::vector<std::string>>> options;
			for (auto &phrase : notProcessedPhrases) {
				options.push_back(phrase.expand());
			}
			
			std::vector<int> numbers;
			for (size_t i=0; i<notProcessedPhrases.size(); i++) {
				numbers.push_back(i);
			}
			std::vector<std::vector<int>> permutations;
			std::set<int> used;
			std::vector<int> current;
			allPermutations(numbers, used, current, permutations);

			std::vector<std::vector<std::string>> expandedPhrases;
			for (auto &perm : permutations) {
				std::vector<std::vector<std::string>> permutationPhrases;
				std::vector<std::string> currentPerm;
				makePermutation(perm, 0, options, permutationPhrases, currentPerm);
				expandedPhrases.insert(expandedPhrases.end(), permutationPhrases.begin(), permutationPhrases.end());
			}
			return expandedPhrases;
		}
		std::vector<PermPhrase> partialExpand() {
			std::vector<std::vector<std::vector<std::string>>> options;
			for (auto &phrase : notProcessedPhrases) {
				options.push_back(phrase.expand());
			}

			PermPhrase initialPhrase;
			std::vector<PermPhrase> phrases = {initialPhrase};
			for (auto &phrase : notProcessedPhrases) {
				std::vector<std::vector<std::string>> options = phrase.expand();
				std::vector<PermPhrase> oldPhrases = phrases;
				phrases = {};
				for (auto &option : options) {
					SubPhrase sub = SubPhrase(option);
					for (auto &perm : oldPhrases) {
						PermPhrase newPhrase = PermPhrase(perm.notProcessedPhrases);
						if (!option.empty()) {
							newPhrase.notProcessedPhrases.push_back(sub);
						}
						phrases.push_back(newPhrase);
					}
				}
			}

			return phrases;
		}
};

class Rule {
	public:
		std::string inputNonterminal;
		std::vector<std::variant<Symbol, PermPhrase>> rightSide;
		Rule(){}
		Rule(std::string input) {
			this->inputNonterminal = input;
			this->rightSide = {};
		}
		Rule(const Rule &oldRule) {
			this->inputNonterminal = oldRule.inputNonterminal;
			this->rightSide = oldRule.rightSide;
		}
		bool operator == (const Rule &r) const {
			return inputNonterminal == r.inputNonterminal && 
				rightSide == r.rightSide;
		}
};

class Item {
	public:
		int ruleNum;
		std::string inputNonterminal;
		std::vector<std::variant<Symbol, PermPhrase>> rightSide;
		size_t dotPosition;
		int counter;
		Item(const Rule &rule, int ruleNum) {
			this->ruleNum = ruleNum;
			this->inputNonterminal = rule.inputNonterminal;
			this->rightSide = rule.rightSide;
			this->dotPosition = 0;
			this->counter = 0;
		}
		Item(const Item &old) {
			this->ruleNum = old.ruleNum;
			this->inputNonterminal = old.inputNonterminal;
			this->rightSide = old.rightSide;
			this->dotPosition = old.dotPosition;
			this->counter = old.counter;
		}
		bool operator == (const Item &i) const {
			return ruleNum == i.ruleNum && 
				counter == i.counter &&
				dotPosition == i.dotPosition && 
				(dotPosition >= rightSide.size() || rightSide[dotPosition] == i.rightSide[dotPosition]);
		}
		std::set<std::string> head() {
			std::set<std::string> options;
			for (auto it = rightSide.begin() + dotPosition; it != rightSide.end(); it++) {
				std::set<std::string> subHead = visit([](auto &phrase){ return phrase.head(); }, *it);
				for (auto symbol: subHead) {
					insert(options, symbol);
				}
				if (!visit([](auto &phrase){ return phrase.optional(); }, *it)) break;
			}
			return options;
		}
		Item step(std::string a) {
			Item newItem(*this);
			newItem.counter++;
			for (size_t i=dotPosition; i<rightSide.size(); i++) {
				bool optionalPhrase = visit([](auto &phrase){ return phrase.optional(); }, newItem.rightSide[i]);
				StepResult res = visit([&](auto &phrase){ return phrase.step(a); }, newItem.rightSide[i]);
				if (res == SuccessStay) {
					newItem.dotPosition = i;
					return newItem;
				} else if (res == SuccessMove) {
					newItem.dotPosition = i+1;
					return newItem;
				} else if (optionalPhrase) {
					continue;
				} else {
					throw a;
				}
			}

			return *this;
		}
};

class State {
	public:
		int num;
		std::vector<Item> items;
		std::map<std::string, int> transitions;
	
		State(std::vector<Item> &items, int num) {
			this->items = items;
			this->transitions = {};
			this->num = num;
		}
		bool operator == (const State &s) const {
			if (items.size() != s.items.size()) {
				return false;
			}

			for (const Item &item: s.items) {
				if (find(items.begin(), items.end(), item) == items.end()) {
					return false;
				} 
			}
			return true;
		}
};

class Grammar {
	public:
		std::string initialNonTerminal;
		std::vector<std::string> nonterminals;
		std::vector<std::string> terminals;
		std::vector<Rule> rules;
		Grammar(){}
		Grammar(const Grammar &inputGrammar){
			this->initialNonTerminal = inputGrammar.initialNonTerminal;
			this->nonterminals = inputGrammar.nonterminals;
			this->terminals = inputGrammar.terminals;
			this->rules = inputGrammar.rules;
		}
};

class AugmentedGrammar {
	public:
		Rule initialRule;
		std::vector<std::string> nonterminals;
		std::vector<std::string> terminals;
		std::vector<Rule> rules;
};