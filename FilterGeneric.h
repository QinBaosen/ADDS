#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric {
    private:
        //returns a boolean value
        virtual bool g(int) = 0; //pure virtual

    public:
        //returns the resulting vector after filtering
        std::vector<int> filter(std::vector<int>);


};


#endif