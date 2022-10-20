#include <iostream>
using namespace std;
#include <string>
#include <cctype>
#include "Polish_prefix.h"
/*
Sample input:  * - 5 6 7
Sample output:  (5 - 6) * 7 = -7

Sample input: * 5
Sample output: Error

Sample input: * 5 6 7
Sample output: Error
*/

int main() {

    // ask a input
    string input;
    getline(cin, input);

	Polish_prefix sample;
	//Check feasible of input
	bool work =sample.isWork(input);
	// Execute calculate
	string equation = sample.prefixToInfix(input);
    int result = sample.preCalc(input);
    if (work != false) {
    	//output
        cout << equation << " = " << result << endl;
    } else {
    	//output
        cout << "Error" << endl;
    }
}