#include "Reverse.h"
#include <string>
using namespace std;
#include <iostream>
#include <cmath>
#include <stdio.h>

int Reverse::reverseDigit(int value){
    static int rev_num = 0;
    static int base_pos = 1;
    //base case
    if(value < 0 ){

        return -1;
    }
    if(value == 0){
        return 0;
    }
    if(value > 0)
      {
        reverseDigit(value/10);
        rev_num  += (value%10)*base_pos;
        base_pos *= 10;
      }
    return rev_num;

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
