#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int bin)
{
    int start = 0;
    int len = list.size()-1;


    while (start <= len)
    {
        int mid = (start + len) / 2;
        int num = list[mid];

        if(num == bin)
        {
            return true;
        }
        else if (num < bin)
        {
            start = mid + 1;
        }
        else if (num > bin)
        {
            len = mid - 1;
        }

    }

    return false;
}