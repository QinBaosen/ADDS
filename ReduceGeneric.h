#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <vector>

class ReduceGeneric {
public:
	int reduce(std::vector<int> vec);
private:
	virtual int binaryOperator(int, int) = 0;
};

#endif