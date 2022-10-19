#include "Polish_prefix.h"
#include <iostream>
#include <vector>
using namespace std;
#include <string>

bool Polish_prefix::ifAccess() {
    // * - 5 6 7
    //* 5 6 7
    //* 5
    // the number of operator cannot excess or equal the number of operand
	if (opt.size() == opd.size() - 1) {
		return true;
	}else{
		return false;
	}
}

string Polish_prefix::prefixToInfix(vector<string> str, int size) {

	vector<string> equation;
    //An operator is a character from +, -, *, and /.
	for (int i = size-1; i >= 0; i--) {
		if (str[i][0] == '+' || str[i][0] == '-' || str[i][0] == '*' || str[i][0] == '/') {

			string head = equation[0];
			string tail = equation[1];
			string equ = head + str[i] + tail;
            //An operand is a nonnegative integer from 0 to 99
			if (i != 0 && !((str[i][0] == '+' || str[i][0] == '-') && (str[i - 1][0] == '+' || str[i - 1][0] == '-'))) {
				equ = "(" + equ + ")";
			}
			equation.erase(equation.begin());
			equation.erase(equation.begin());
			equation.insert(equation.begin(), equ);
		}else {
			equation.insert(equation.begin(), str[i]);
		}

	}

	return equation[0];
}

void Polish_prefix::createStack(vector<string> str, int size) {

    //create a stack
	for (int i = 0; i < size; i++) {
		if (str[i][0] == '+' || str[i][0] == '-' || str[i][0] == '/' || str[i][0] == '*') {
			opt.push_back(str[i][0]);
		}
		else if (str[i][0] != '(' && str[i][0] != ')'){
			opd.push_back(str[i][0]);
		}
	}

}

string Polish_prefix::Calculator(vector<string> str, int size) {

    // create a stack to calculate equation
	this->createStack(str, size);
	if (this->ifAccess() == false) {
		return "Error";
	}
	// convert the prefix expression to an infix form and output its value
	string equation = this->prefixToInfix(str, size);
	//return equation
	return equation;
}
