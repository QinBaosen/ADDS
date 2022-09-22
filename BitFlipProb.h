#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"

class BitFlipProb : public Mutator {

public:
	BitFlipProb(double p);
	Individual mutate(Individual ind, int k);
	double probability;

};

#endif