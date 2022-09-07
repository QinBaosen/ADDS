#include "FilterGeneric.h"
#include "FilterNonPositive.h"

bool FilterNonPositive::g(int number) {

	//	filter out the positive values
	if (number < 0) {
		return true;
	}
	else {
		return false;
	}

}