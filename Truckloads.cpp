#include "Truckloads.h"
using namespace std;
#include <iostream>

int Truckloads::numTrucks(int numCrates, int ){
    if((numCrates>10000)||(numCrates<2)){
        cout << "ERROR";
        return 0;
    }
    if((loadSize>(numCrates-1))||(loadSize<1)){
        cout << "ERROR";
        return 0;
    }
    if((numCrates <= loadSize) && (numCrates >0)){
        return 1;
    }

    if(numCrates < 1){
        return 0;
    }

    return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
}