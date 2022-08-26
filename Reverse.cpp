#include "Reverse.h"
#include <string>
using namespace std;
#include <string>
#include <cmath>
#include <iostream>
#include <stdio.h>

int Reverse::reverseDigit(int value){

    if(value < 0 ){

        return -1;
    }
    if(value = 0 ){

        return 0;
    }

    int iResault = 0;
	static int iPos = 10;
	if(value/10 == 0)
	{
		iPos = 10;
		return value;
	}
	iResault = reverseDigit(value/10) + value % 10 * iPos;
	iPos *= 10;
	return iResault;

}


string Reverse::reverseString(string letters){
	int len=letters.length();

	if(len <= 0)
    {
        return "ERROR";

    }else if(len == 1){
        return letters;
    }

	return reverseString(letters.substr( 1))+letters.substr(0,1);


}