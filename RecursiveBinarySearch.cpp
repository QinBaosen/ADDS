#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int bin)
{
    int start = 0;
    int len = list.size() - 1;
    int mid = (start + len) / 2;

    if (len <= start){
		return false;
    }

    int num = list[mid];
    while (start <= len)
    {

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