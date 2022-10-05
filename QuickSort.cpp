#include "QuickSort.h"

// find a pivot and compare each number
// divide all numbers into two list(small and big)
std::vector<int> QuickSort::sort(std::vector<int> list)
{
    quick_sort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quick_sort(std::vector<int>& list, int small, int big)
{
    if (small < big){

        int pivot = divide(list, small, big);
        quick_sort(list, small, pivot - 1);
        quick_sort(list, pivot + 1, big);
    }

}

int QuickSort::divide(std::vector<int>& list, int small, int big)
{
    int pivot = list[small];

    while (small < big)
    {
        while (small < big && list[big] > pivot)
        {
            --big;
        }
        list[small] = list[big];

        while (small < big && list[small] <= pivot)
        {
            ++small;
        }
        list[big] = list[small];
    }

    list[small] = pivot;

    return small;
}