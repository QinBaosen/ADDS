#include "Reverse.h"
#include <string>
using namespace std;
#include <iostream>
#include <stdio.h>

int Reverse::reverseDigit(int value){
    static int rev_num = 0;
    static int base =0;
    static int num=0;
    //base case
    if(value < 0 ){
        cout <<"ERROR" <<endl;
        return -1;
    }

    if(value == 0){
        return 0;
    }

    if(value >= 10){
        rev_num = value%10;
        base = (base*10)+rev_num;
        return reverseDigit(value/10);
    }else{

        num = (base*10)+value;
        return num;
    }



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
