#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int bin)
{
    int start = 0;
    int len = list.size();
    int mid = (start + len) / 2;

    if (len <= start){
		return false;
    }

    int num = list[mid];

    if(num == bin){
        return true;
    }
    else if (bin < num)
    {
        list = vector<int>(list.begin(), list.begin() + mid);
		return search(list, bin);
    }
    else if (bin > num)
    {
        list = vector<int>(list.begin() + mid + 1, list.end());
		return search(list, num);
    }


    return false;
}