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
    vector<int> list;

    int i;
    char c;

    while (1)
    {
        c = getchar();

        if ((c >= '0' && c <= '9') || c == '-')
        {
            ungetc(c, stdin);
            cin >> i;
            list.push_back(i);
        }

        if (c == '\n')
        {
            break;
        }
    }

    Sort* s = new QuickSort();
    list = s->sort(list);
    RecursiveBinarySearch rbs;
    cout << rbs.search(list, 1);

    int len = list.size();
	for (int i = 0; i < len; i++)
		cout << list[i] << " ";
	cout << " " << endl;

    delete s;

    return 0;
}