#include "FilterForTwoDigitPositive.h"


bool FilterForTwoDigitPositive::g(int number) {


	if ((number >9) && (number < 100)) {
		return true;
	}
	else {
		return false;
	}
}