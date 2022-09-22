#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"

class Mutator {
public:
    //The Mutator class has a function mutate that takes in an Individual and an integer index k as parameter and returns the offspring after mutation.
	virtual Individual mutate(Individual ind, int k) = 0;

};

#endif