#include "Polish_prefix.h"
#include <iostream>
#include <string>
using namespace std;
int Polish_prefix::opCal(int a, int b, char c) {
    switch (c) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    
    return 0;
}
int Polish_prefix::number(){
    if (opd.size() == 1) {
 		cout << function << "= " << opd.top() << endl;
 	}
	else {
 		cout << "wrong operand" << endl;
 		return 0;
 	}
    return 1;
}

int Polish_prefix::Install(string x){
    int len = temp.size();
    	for (int i = 0; i < len; i++) {
		double num = temp.top();
		opd.push(num);
		temp.pop();
	}

	if (opd.empty() || (opts.size() >= opd.size()) || ((opd.size() - 1) != opts.size() )){
		cout << "Error" << endl;
		return 0;
	}
    for (int i = 0; i < x.length(); i++) {

		if (x.at(i) == '+' || x.at(i) == '*' || x.at(i) == '-' || x.at(i) == '/' ) {
			opts.push(x.at(i));
		}else if (isdigit(x.at(i)) == true) {
			double num = x.at(i) - '0';
			temp.push(num);

			for (int j = i; j < x.length(); j++) {

				if (x.at(j) == '-' || x.at(j) == '+' || x.at(j) == '*' || x.at(j) == '/' ) {
					cout << "Error" << endl;
					return 0;
				}
			}
		}
	}

    return 1;
}
void Polish_prefix::Calculator(){

    int count =0;
	while (opd.size() > 1) {

		count++;

		num1 = opd.top();
		if (count == 1) {

			function = function +to_string(num1) + " ";
		}

		opd.pop();
		op = opts.top();

		if ((op == '*' || '/') && count == 1) {
			function = "(" + function + op + " ";
		}
		else if ((op == '*' || '/')){
			function = function + op + " ";
		}
		else {
			function + op;
		}

 		opts.pop();

		num2 = opd.top();
		if ((op == '*' || '/')  && count == 1) {
			function = function +  to_string(num2) + ") ";
		}
		else {
			function = function + to_string(num2);
		}

 		opd.pop();

 		if (op == '+') {
 			result = num1 + num2;
 		}
		else if (op == '-') {
 			result = num1 - num2;
 		}
		else if (op == '*') {
 			result = num1 * num2;
 		}
		else if (op == '/') {
 			result = num1 / num2;
 		}
 		opd.push(result);

 	}
}
