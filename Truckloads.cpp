#include "Truckloads.h"
using namespace std;
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    
    if((numCrates <= loadSize) && (numCrates >0)){
        return 1;
    }

    if(numCrates < 1){
        return 0;
    }

    return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
}