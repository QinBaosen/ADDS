#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric {
private:
    //overridden the derived classes
	int binaryOperator(int, int);
};

#endif