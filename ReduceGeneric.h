#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <vector>

class ReduceGeneric {
public:
	//returns the result of reduce
	int reduce(std::vector<int> vec);
private:
	//overridden later in the derived classes to deliver specific map operations
	//pure virtual
	virtual int binaryOperator(int, int) = 0;
};

#endif