#include <string>
#include <set>
#include <iostream>
#include <vector>

void insert(std::set<std::string> &options, std::string symbol) {
	auto isNew = options.insert(symbol);
	if (!isNew.second) {
		std::cout << "Error: grammar does not satisfy the requrements. There are more possible steps for symbol " << symbol;
		exit(EXIT_FAILURE);
	}
}

void allPermutations(std::vector<int> &numbers, std::set<int> &used, std::vector<int> &current, std::vector<std::vector<int>> &permutations) {
	if (used.size() == numbers.size()) {
		permutations.push_back(current);
		return;
	} 

	for (const auto num : numbers) {
		if (used.find(num) != used.end()) continue;

		current.push_back(num);
		used.insert(num);
		allPermutations(numbers, used, current, permutations);
		used.erase(num);
		current.pop_back();
	}
}

void makePermutation(std::vector<int> &order, size_t pos, std::vector<std::vector<std::vector<std::string>>> &options, std::vector<std::vector<std::string>> &permutations, std::vector<std::string> &current) {
	if (pos == order.size()) {
		permutations.push_back(current);
		return;
	}

	for (auto &option : options[order[pos]]) {
		for (auto symbol : option) {
			current.push_back(symbol);
		}
		makePermutation(order, pos+1, options, permutations, current);
		for (auto symbol : option) {
			current.pop_back();
		}
	}
}