#include "FilterGeneric.h"
#include <vector>
using namespace std;


vector<int> FilterGeneric::filter(vector<int> list) {

	int length = list.size();
	vector<int> Empty; // create a empty vector

	if (length == 1) {
		if (g(list[0])) {
			return list;
		}
		else {
			return Empty;
		}
	}

	list.pop_back();
	vector<int> result = filter(list); // the resulting vector after filtering

	if (g(list[length-1])) {

		vector<int> number = { list[length - 1] };
		result.insert(result.end(), number.begin(), number.end());
	}
	else {
		result.insert(result.end(), Empty.begin(), Empty.end());
	}

	return result;

}