#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){

    /*Sample input: 1 3 5 4 -5 100 7777 2014
    Sample output: true -5 1 3 4 5 100 2014 7777

    Sample input: 0 3 5 4 -5 100 7777 2014
    Sample output: false -5 0 3 4 5 100 2014 7777
    */

    Sort* quickSort = new QuickSort();
    RecursiveBinarySearch* binarySearch = new RecursiveBinarySearch();

    vector<int> num;

    string str;
    getline(cin, str);

    stringstream ss(str);
    for (int i; ss >> i;) {
        num.push_back(i);
    }

    num = quickSort->sort(num);
    if (binarySearch->search(num, 1)) {
        cout << "true ";

    }
    else {
        cout << "false ";
    }

    int n = num.size();
    for (int i = 0; i < n; i++) {
        cout << num.at(i) << " ";
    }
    cout << endl;
}