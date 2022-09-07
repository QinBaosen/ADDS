#include "FilterOdd.h"
#include "FilterGeneric.h"

bool FilterOdd::g(int number) {
	//filter out the even values
	if (number % 2 == 0) {
		return false;
	}
	else {
		return true;
	}
}