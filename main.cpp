#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){

    /*Sample input: 1 3 5 4 -5 100 7777 2014
    Sample output: true -5 1 3 4 5 100 2014 7777

    Sample input: 0 3 5 4 -5 100 7777 2014
    Sample output: false -5 0 3 4 5 100 2014 7777
    */

    vector<int> data;
    string str;
    getline(cin, str);
    stringstream stringl(str);
    for (int mid; stringl >> mid;) {
        data.push_back(mid);
    }
    Sort* qs = new QuickSort();
    data = qs->sort(data);
    RecursiveBinarySearch* bs = new RecursiveBinarySearch();

    if (bs->search(data, 1)) cout << "true ";
    else cout << "false ";

    int n = data.size();
    for (int j = 0; j < n; j++)
		cout << data[j] << " ";
	cout << " " << endl;

	delete qs;
	delete bs;
    return 0;
}