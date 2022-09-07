#include "FilterOdd.h"
#include "FilterGeneric.h"

bool FilterOdd::g(int number) {
	if (number % 2 == 0) {
		return false;
	}
	else {
		return true;
	}
}