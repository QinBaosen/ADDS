#include "ReduceMinimum.h"
using namespace std;

int ReduceMinimum::binaryOperator(int num1, int num2) {
	//return the smaller value between num1 and num2
	if (num1 < num2)
		return num1;
	else
		return num2;
}