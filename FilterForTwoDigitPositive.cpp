#include "FilterForTwoDigitPositive.h"


bool FilterForTwoDigitPositive::g(int number) {

	// select all two-digit positive numbers
	if ((number >9) && (number < 100)) {
		return true;
	}
	else {
		return false;
	}
}