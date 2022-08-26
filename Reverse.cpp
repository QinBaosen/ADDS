#include "Reverse.h"
#include <string>
using namespace std;
#include <string>
#include <cmath>
#include <iostream>

int lastdigit =0;
int Reverse::reverseDigit(int value){
    int apow = to_string(value).length();
    if(value < 0 ){

        return -1;
    }

    if(value <=10){
        return value+ lastdigit;
    }
   int digit = (int) log10(value);



   return ((value%10 * pow(10, digit)) + reverseDigit(value/10));

}

string Reverse::reverseString(string letters){
	string word = "";
	if(letters.length() < 0)
    {
        return "ERROR";
    }


}