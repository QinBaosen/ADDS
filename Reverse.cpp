#include "Reverse.h"
#include <string>
using namespace std;
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

    int reverseNumber = 0;
    while(value > 0){
        reverseNumber = reverseNumber*10 + value%10;
         value /= 10;
    }
    return reverseNumber;



}


string Reverse::reverseString(string letters){
	int len=letters.length();

	if(len <= 0)
    {
        return "ERROR";

    }else if(len == 1){
        return letters;
    }

	return reverseString(letters.substr(1))+letters.substr(0,1);


}
