#include "BitFlipProb.h"
#include <time.h>


BitFlipProb::BitFlipProb(double p) {
    //p should be given as a parameter of the constructor.
	probability = p;
}

Individual BitFlipProb::mutate(Individual ind, int k) {
    //in the range of (0,1)
	srand(time(NULL));
    //goes through every digit in the binary string
	for (int i = 0; i < ind.getLength(); i++) {
	    double num = ((double)rand() / (RAND_MAX));
		if (num <= probability) {
			ind.flipBit(i);
		}
	}

	return ind;
}