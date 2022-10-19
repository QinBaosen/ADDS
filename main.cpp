#include <iostream>
using namespace std;
#include <string>
#include <cctype>
#include "Polish_prefix.cpp"
/*
Sample input:  * - 5 6 7
Sample output:  (5 - 6) * 7 = -7

Sample input: * 5
Sample output: Error

Sample input: * 5 6 7
Sample output: Error
*/

int main() {


	string expression;
	vector<string> str;
    // get expression
	getline(cin, expression);
    // get length of expression
    int size = (int)expression.length();
	for (int i = 0; i < size; i++) {

		if (expression[i] == '+' || expression[i] == '-' || expression[i] == '/' || expression[i] == '*' || isdigit(expression[i])) {
			string element(1, expression[i]);
			str.push_back(element);
		}
		else if (expression[i] == ' ') {
			continue;
		}
		else {
			cout << "Error" << endl;
			return 1;
		}

	}
	Polish_prefix ppdd;
	string equation = ppdd.Calculator(str, str.size());
	// print result
	cout << equation << endl;
	return 0;

}