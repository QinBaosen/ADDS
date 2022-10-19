#ifndef POLISH_PREFIX_H
#define POLISH_PREFIX_H
#include <stack>
#include <string>

class Polish_prefix {

public:
    int opCal(int , int , char );
    int number();
    int Install(std::string);
    void Calculator();

private:
    std::stack <char> opts;
    std::stack <double> opd;
    std::stack <double> temp;
    int num1;
    int num2;
    char op;
    std::string function;
    char result;

};

#endif