#include "ReduceGeneric.h"
using namespace std;

int ReduceGeneric::reduce(vector<int> list) {

	int len = list.size();
	if (len == 1) {
		return (int)list[0];
	}
	int result = binaryOperator(list[0], list[1]);
	list.erase(list.begin());
	list[0] = result;
	return reduce(list);
}