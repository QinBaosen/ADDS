#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <string>
#include <iostream>
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {

    Individual ind = mPtr->mutate(*indPtr, k);

	return new Individual(ind.getString());
}

int main() {

    string str1, str2;
    int k1, k2;

    cin >> str1;
    cin >> k1;
    cin >> str2;
    cin >> k2;

    Individual * ind1 = new Individual(str1);
	Individual* ind2 = new Individual(str2);

    BitFlip *bf = new BitFlip;
    Rearrange *ra = new Rearrange;

    Individual* bInd1 = execute(ind1, bf, k1-1);
    Individual* rInd2 = execute(ind2, ra, k2-1);

    cout << bInd1->getString() << " "
        << rInd2->getString() << "  "
        << rInd2->getMaxOnes() << endl;

    return 0;

}
