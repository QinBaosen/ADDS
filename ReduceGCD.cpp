#include "ReduceGCD.h"
using namespace std;

int ReduceGCD::binaryOperator(int num1, int num2) {
	if (num1 == 0 || num2 == 0) {
		return 0;
	}

	if (num1 == num2) {
		return num1;
	}

	if (num1 < num2) {
		return binaryOperator(num1, num2 - num1);
	}
	else
		return binaryOperator(num1 - num2, num1);

}