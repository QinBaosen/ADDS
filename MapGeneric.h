#ifndef __MAPGENERIC_H
#define __MAPGENERIC_H
#include <vector>
//base class
class MapGeneric{
    public:
        //returns the resulting vector after mapping
        std::vector<int> map(std::vector<int>);

    private:
        virtual int f(int x)=0; //pure virtual
};

#endif