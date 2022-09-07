#include "MapGeneric.h"
#include <iostream>
#include <vector>
using namespace std;

vector<int> MapGeneric::map(vector<int> number){

	// get length of vector
	int len = number.size();
	if (len == 1) {
		number[0] = f(number[0]);
		return number;
	}
	int tail = number[len - 1];
	number.pop_back();
	vector<int> result = map(number);
	result.push_back(f(tail));
	return result;

}