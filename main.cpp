#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
using namespace std;

/*Sample input: 1 3 5 4 -5 100 7777 2014
    Sample output: true -5 1 3 4 5 100 2014 7777

    Sample input: 0 3 5 4 -5 100 7777 2014
    Sample output: false -5 0 3 4 5 100 2014 7777
    */

int main()
{

    //takes in a list of integers
    vector<int> list;

    int num;
    char str;

    // ascending order first using quick sort
    Sort* qs = new QuickSort();
    RecursiveBinarySearch rbs;

    while (1)
    {
        str = getchar();

        if ((str >= '0' && str <= '9') || str == '-')
        {
            ungetc(str, stdin);
            cin >> num;
            list.push_back(num);
        }

        if (str == '\n')
        {
            break;
        }
    }

    list = qs->sort(list);

    cout << boolalpha << rbs.search(list, 1);


    //results

    int n = list.size();
    for (int i = 0; i < n; i++) {
        cout << list.at(i) << " ";
    }
    cout << endl;
    return 0;
}