#include "EfficientTruckloads.h"
#include "Reverse.h"
#include "Truckloads.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Reverse w1;
    int reversenum = w1.reverseDigit(12345);
    cout << reversenum <<endl;
    // string result = w1.reverseString("abc");
    // cout << result <<endl;
    // Truckloads t1;
    // int result = Truckloads.numTrucks(10,2);
    // cout << result<<endl;

    return 0;
}