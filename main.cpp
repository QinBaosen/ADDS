#include "EfficientTruckloads.h"
#include "Reverse.h"
#include "Truckloads.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Reverse w1,w2,w3,w4;
    int reversenum = w1.reverseDigit(100);
    cout << reversenum <<endl;
    string result = w2.reverseString("avalanche");
    cout << result <<endl;

    int re1 = w3.reverseDigit(12345);
    cout << re1 <<endl;
    string re2 = w4.reverseString("appa");
    cout << re2 <<endl;
    // Truckloads t1;
    // int result = Truckloads.numTrucks(10,2);
    // cout << result<<endl;

    return 0;
}