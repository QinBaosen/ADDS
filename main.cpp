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

// int main() {

//     // ask a input
//     string input;
//     getline(cin, input);

// 	Polish_prefix *sample = new Polish_prefix();

// 	// Execute calculate
// 	string equation = sample->prefixToInfix(input);
//     int result = sample->preCalc(input);
//     //Check feasible of input

//     if (sample->isWork(input)) {
//     	//output
//         cout << equation << " = " << result << endl;
//     } else {
//     	//output
//         cout << "Error" << endl;
//     }
// }

int main() {
   // ask a input
    string input;
    getline(cin, input);

	Polish_prefix *sample = new Polish_prefix();
	////Check feasible of input
	bool result = sample->isWork(input);

    // print result
    if (result == false) {
    	//output
        cout << "Error" << endl;
    } else {

        cout << sample->prefixToInfix(input) << " = " << sample->preCalc(input) << endl;
    }
}