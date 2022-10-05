#ifndef SORT_H
#define SORT_H
#include <vector>

class Sort{

public:
    //pure virtual function
	virtual std::vector<int> sort(std::vector<int> list) = 0;
};
#endif