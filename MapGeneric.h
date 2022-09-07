#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include<vector>

class MapGeneric {
private:
	virtual int f(int x) = 0; //pure virtual function
public:
    //returns the resulting vector after mapping
	std::vector<int> map(std::vector<int>);
};
#endif // !MAPGENERIC_H