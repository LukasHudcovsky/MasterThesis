
void insert(std::set<std::string> &options, std::string symbol);

void allPermutations(std::vector<int> &numbers, std::set<int> &used, std::vector<int> &current, std::vector<std::vector<int>> &permutations);

void makePermutation(std::vector<int> &order, int pos, std::vector<std::vector<std::vector<std::string>>> &options, std::vector<std::vector<std::string>> &permutations, std::vector<std::string> &current);