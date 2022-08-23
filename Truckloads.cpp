#include "Truckloads.h"
using namespace std;
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates < 2) || (numCrates >1000){
        cout<<"ERROR ";
        return -1;
    }
    if(loadSize < 1) || (loadSize >numCrates - 1){
        cout<<"ERROR ";
        return -1;
    }
    if(numCrates < 1){
        return 0;
    }
    if(numCrates < = loadSize){
        return 1;
    }
    return numTrucks(numCrates/2,loadSize)+numTrucks(numCrates/2,loadSize);
}