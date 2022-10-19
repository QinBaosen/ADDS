#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string>
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

	string str;
	getline(cin,str);
	if (str.length() == 0 || str.length() == 1) {
		cout << "Error" << endl;
		return 0;
	}

	if (str.at(0) != '+' && str.at(0) != '-' && str.at(0) != '*' && str.at(0) != '/' ) {
		cout << "Error" << endl;
		return 0;
	}

	Polish_prefix pp;
	int error;
    error = pp.Install(str);
    if (error == 0)
    {
        return 0;
    }
    pp.Calculator();
    error = pp.number();
    if (error == 0)
    {
        return 0;
    }


}