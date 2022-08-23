#include "Reverse.h"
#include <string>
using namespace std;
#include <string>
#include <math.h>

int Reverse::reverseDigit(int value){
    if(value <= 0 ){

        return -1;
    }

   int digit = (int) log10(value);



   return ((value%10 * pow(10, digit)) + reverseDigit(value/10));

}

string Reverse::reverseString(string letters){
	string word = "";
	if(letters.length() <= 0)
    {
        return "ERROR";
    }else
    {
        string str_copy = letters;
        int n = str_copy.length() - 1;
        string last_letter = str_copy.substr(n, 1);

        str_copy = str_copy.substr(0, n);
        word += reverse(str_copy);
        return str_copy;
    }
    return word;

}