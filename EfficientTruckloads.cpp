#include "EfficientTruckloads.h"

#include <iostream>
#include <vector>
using std::vector;

int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){
    
    vector <int> truckTable(10000, 0);
    //base case
    if((numCrates <= loadSize) && (numCrates >0)){
        return 1;
    }

    if(numCrates <=0 || loadSize <=0){
        return 0;
    }
    if(truckTable.at(numCrates) > 0){
        return  truckTable.at(numCrates);
    }
    truckTable.at(numCrates) = numTrucks(numCrates/2, loadSize) + numTrucks(numCrates - numCrates/2, loadSize);
    return truckTable.at(numCrates);


}
