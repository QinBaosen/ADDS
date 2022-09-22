#include "BitFlip.h"
using namespace std;

Individual BitFlip::mutate(Individual ind, int k) {
    //“flips” the kth binary digit

	ind.flipBit((k % ind.getLength()));

	return ind;
}