#ifndef POLISH_PREFIX_H
#define POLISH_PREFIX_H
#include <string>
#include <vector>

class Polish_prefix {
public:
    std::vector<char> opt;
	std::vector<char> opd;
    bool ifAccess();
	std::string prefixToInfix(std::vector<std::string>, int);
	void createStack(std::vector<std::string>, int);
	std::string Calculator(std::vector<std::string>, int);

};

#endif