#ifndef POLISH_PREFIX_H
#define POLISH_PREFIX_H
#include <string>


class Polish_prefix {

public:

    bool ifAccess(char);
    int operCal(int, int, char);
    int preCalc(std::string);
    std::string prefixToInfix(std::string);
    bool isWork(std::string);
	
};
#endif