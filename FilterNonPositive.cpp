#include "FilterGeneric.h"
#include "FilterNonPositive.h"

bool FilterNonPositive::g(int number) {
	if (number < 0) {
		return true;
	}
	else {
		return false;
	}

}