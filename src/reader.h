#include "definitions.h"

std::pair<std::string, bool> testOptional(std::string token);

std::pair<SubPhrase, bool> readSubPhrase(std::string token, std::ifstream &grammarFile, std::set<std::string> &symbols);

PermPhrase readPermPhrase(std::ifstream &grammarFile, std::set<std::string> &symbols);

std::vector<Rule> readRules(std::string input, std::ifstream &grammarFile, std::set<std::string> &symbols);

Grammar readGrammar(std::string fileName);