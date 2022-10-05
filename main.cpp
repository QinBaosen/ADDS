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
int read()
{
    int x = 0;
    int flag = 1;
    char c = getchar();
    while (c != '-' && !(c >= '0' && c <= '9'))c = getchar();
    if (c == '-'){flag = -1;}
    else x = c - '0';
    c = getchar();
    while (c >= '0' && c <= '9')
    {
        x = x * 10 + c - '0';
        c = getchar();
    }
    return x * flag;
}

int main()
{
    vector<int> data;

    int i;
    char c;

    while (1)
    {
        c = getchar();

        if ((c >= '0' && c <= '9') || c == '-')
        {
            ungetc(c, stdin);
            cin >> i;
            data.push_back(i);
        }

        if (c == '\n')
        {
            break;
        }
    }

    Sort* s = new QuickSort();
    data = s->sort(data);
    RecursiveBinarySearch rbs;
    cout << boolalpha << rbs.search(data, 1);

    for (const auto& d : data)
    {
        cout << " " << d;
    }

    delete s;

    return 0;
}
