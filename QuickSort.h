#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>

class QuickSort : public Sort{
    
public:
	virtual std::vector<int> sort(std::vector<int> list);
	void quick_sort(std::vector<int> &list, int small, int big);
	int divide(std::vector<int> &list, int small, int big);

};

#endif