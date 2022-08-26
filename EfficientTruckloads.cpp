#include "EfficientTruckloads.h"

#include <iostream>
#include <vector>
using std::vector;

EfficientTruckloads::EfficientTruckloads(){

}
int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){
    // if((numCrates>10000)||(numCrates<2)){
    //     cout << "ERROR";
    //     return 0;
    // }
    // if((loadSize>(numCrates-1))||(loadSize<1)){
    //     cout << "ERROR";
    //     return 0;
    // }
    static vector <int> truckTable(10000, -1);
    if((numCrates <= loadSize) && (numCrates >0)){
        return 1;
    }

    if(numCrates < 1){
        return 0;
    }
    truckTable.at(numCrates) = numTrucks(numCrates/2 + numCrates%2, loadSize) +numTrucks(numCrates/2, loadSize);
    return truckTable.at(numCrates);


}
