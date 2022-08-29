#include "EfficientTruckloads.h"

#include <iostream>
#include <vector>
using namespace std;
EfficientTruckloads::EfficientTruckloads() {

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

    vector<int> truckTable(10001, -1);
    if (numCrates <1 ) { // no negative number
        cout << "ERROR" << endl;
        return 0;
    }
    if (loadSize < 1) {
        cout << "ERROR" << endl;
        return 0;
    }
    //base case
    if ((numCrates <= loadSize) && (numCrates > 0)) {
        return 1;
    }

    truckTable.at(numCrates) = numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates - numCrates / 2, loadSize);
    return truckTable.at(numCrates);


}