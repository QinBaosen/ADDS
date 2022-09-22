#include "Rearrange.h"
#include <iostream>
#include <string>
using namespace std;

Individual Rearrange::mutate(Individual ind, int k) {
// rearrange the list

	string str = ind.getString();
	int loc = k % str.size();
	string start(ind.getLength() - loc, '0');
	string tail(loc, '0');

//// This digit and all digits after it (all the way
// to the tail) will be moved to the start of the list.
	for (int i = 0; i < loc; i++) {
		tail[i] = str[i];
	}
	for (int j = 0; j < (int)str.size()-loc; j++) {
		start[j] = str[loc + j];
	}
	Individual neoInd(start + tail);
	return neoInd;

}