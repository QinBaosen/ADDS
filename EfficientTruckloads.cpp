#include "EfficientTruckloads.h"
using namespace std;
#include <iostream>
#include <vector>
using std::vector;


int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    static vector<int> truckNum(10000,-1);
    if(numCrates <= 0){
        return 0;
    }
    if(numCrates <= loadSize){
         truckNum.at(numCrates) =1;
         return 1;
    }
    truckNum.at(numCrates) = numTrucks(numCrates/2 + numCrates%2, loadSize) +numTrucks(numCrates/2 + numCrates%2, loadSize);
    return truckNum.at(numCrates);


}