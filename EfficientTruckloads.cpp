#include "EfficientTruckloads.h"
using namespace std;
#include <iostream>
#include <vector>
using std::vector;

static int* p = new int[10000];
int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if((numCrates <= loadSize) && (numCrates >0)){
        return 1;
    }

    if(numCrates < 1){
        return 0;
    }
    p[numCrates] = numTrucks(numCrates/2, loadSize) +numTrucks(numCrates/2 - numCrates/2, loadSize);
    return p[numCrates];


}