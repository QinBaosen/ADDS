#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric {
private:
    //overridden the derived classes
	int binaryOperator(int, int);
};

#endif