#ifndef BUBBLESORT
#define BUBBLESORT
#include "Sort.h"
#include <vector>

//extends Sort
class BubbleSort : public Sort {
    public:
        virtual std::vector<int> sort(std::vector<int> list);
        
};

#endif