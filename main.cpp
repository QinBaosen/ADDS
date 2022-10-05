#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*Sample input: 1 3 5 4 -5 100 7777 2014
    Sample output: true -5 1 3 4 5 100 2014 7777

    Sample input: 0 3 5 4 -5 100 7777 2014
    Sample output: false -5 0 3 4 5 100 2014 7777
    */
int main()
{
	vector<int> list;
	string mid, str;
	getline(cin, str);
	stringstream temp(str);
	QuickSort qs;
	list = qs.sort(list);
	RecursiveBinarySearch binarySearch;
	while (temp >> mid){
		list.push_back(stoi(mid));
	}
	bool result = binarySearch.search(list, 1);
	if (result == true)
		cout << "true ";
	else
		cout << "false ";
	int n = list.size();
	for (int i = 0; i < n; i++)
		cout << list[i] << " ";
	cout << " " << endl;

	return 0;
}