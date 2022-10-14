#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>
using namespace std;


/*
Sample input: 5 2 7 10 AP 3 9
expected output: 5 2 9 7 10
Sample input: 3 4 2 1 DP 3 0
expected output: 3 4 1
Sample input: 45 20 2 10 GI 3 0
expected output: 2 45 20 2 10
*/

int main() {
    int ele;
    int count = 0;
    string str;
    int array[100];
    //the size of this array never exceeds 100
    for (int i = 0; i < 100; i++) {
        cin >> ele;
        if (cin.fail()) {
            cin.clear();
            cin >> str;
            break;
        }
        array[i] = ele;
        count++;
    }

    LinkedList * LL = new LinkedList(array, count);

    /*
    AF standing for addFront
    AE standing for addEnd
    AP standing for addAtPosition
    S standing for search
    DF standing for deleteFront
    DE standing for deleteEnd
    DP standing for deletePosition
    GI standing for getItem
    */
    //int1 int2 ... intn FUNCTION_CODE param1 param2
    int param1, param2;
    cin >> param1 >> param2;
    if (str == "AF") {
        LL->addFront(param1);

    }else if (str == "AE") {
        LL->addEnd(param1);

    }else if (str == "AP") {
        LL->addAtPosition(param1, param2);
    }
    else if (str == "S") {
        LL->search(param1);
    }
    else if (str == "DF") {
        LL->deleteFront();
    }
    else if (str == "DE") {
        LL->deleteEnd();
    }
    else if (str == "DP") {
        LL->deletePosition(param1);
    }
    else {
        LL->getItem(param1);
    }

    LL->printItems();
    return 0;
}