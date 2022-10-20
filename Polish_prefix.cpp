#include "Polish_prefix.h"
#include <cctype>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#include <string>

bool Polish_prefix::ifAccess(char c)
{
	//An operator is a character from +, -, *, and /.
    if (c == '+' || c == '-' || c == '*' || c == '/' ){
        return true;
    }else{
        return false;
    }
}

int Polish_prefix::operCal(int a, int b, char c) {
	//calculate
    if (c == '+'){
       return a + b;
    }
    if (c == '-'){
       return a - b;
    }
    if (c == '*'){
       return a * b;
    }
    if (c == '/'){
       return a / b;
    }
    return 0;
}

int Polish_prefix::preCalc(string num) {

	stack<int> equation;
	string head = "";
    bool pre = false;
	//* (+ 5 6) 7
	//* + 5 6 7
	//The processing of the product is deferred until its two operands are available
	int len = num.size();
    if (len < 2){
    	return stoi(num);
    }

    for (int i = len-1; i >= 0; i--) {
        if (ifAccess(num[i])) {
            int operand1 = equation.top();
            equation.pop();
            int operand2 = equation.top();
            equation.pop();

            int d1 = operCal(operand1, operand2, num[i]);
            equation.push(d1);

        } else if (num[i] == ' ' && pre){
            int d1 = stoi(head);
            equation.push(d1);
            head = "";
            pre = false;

        } else if (isdigit(num[i])) {
            head = num[i] + head;
            pre = true;
        }
    }

    return equation.top();
}

string Polish_prefix::prefixToInfix(string str) {

    int len = str.size();
    stack<string> equation;
    string head = "";
    bool res = false;
	if (len < 2){
		return str;
	}
	//Operators (+ - * / )
	//operand is a nonnegative integer from 0 to 99
    for (int i = len-1; i >= 0; i--) {
        if (ifAccess(str[i])) {
            string operand1 = equation.top();
            equation.pop();
            string operand2 = equation.top();
            equation.pop();

            string eqt = "(" + operand1 + " " + str[i] + " " + operand2 + ")";
            if (i == 0 || str[i] == '*' || str[i] == '/') eqt =  operand1 + " " + str[i] + " " + operand2;

            equation.push(eqt);

        } else if (str[i] == ' ' && res) {
            equation.push(head);
            head = "";
            res = false;

        } else if (isdigit(str[i])) {
            head = str[i] + head;
            res = true;
        }
    }
   return equation.top();
}

// check the feasible of string
bool Polish_prefix::isWork(string str) {
    int co = 0;
    int cn = 0;
    string head = "";
    bool eqt =  false;
    for (int i = 0; i < str.size(); i++) {
        if (!ifAccess(str[i]) && !isdigit(str[i]) && str[i] != ' '){
        	return false;
        }
        if (ifAccess(str[i])){
        	co++;
        }else if (str[i] == ' ' && eqt) {
            if (stoi(head) > 99){
            	return false;
            }
            cn++;
            eqt = false;
            head = "";
        }else if (isdigit(str[i])) {
            head += str[i];
            eqt = true;
        }
    }
    if (eqt){
    	cn++;
    }
    if ((cn - co) != 1){
    	return false;
    }
    return true;
}
