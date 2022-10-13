#include "LinkedList.h"
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
int main()
{
    int count = 0;
    int arr[100];

    int x;
    string command;
    for (int i = 0; i < 100; i++) {
        cin >> x;
        if (cin.fail()) {
            cin.clear();
            cin >> command;
            break;
        }
        arr[i] = x;
        count++;
    }
    int para1, para2;
    cin >> para1 >> para2;

    LinkedList *ls = new LinkedList(arr, count);
    if (choice == "AF")
        ls->addFront(para1);
    else if (choice == "AE")
        ls->addEnd(para1);
    else if (choice == "AP")
        ls->addAtPosition(para1, para2);
    else if (choice == "S")
        ls->search(para1);
    else if (choice == "DF")
        ls->deleteFront();
    else if (choice == "DE")
        ls->deleteEnd();
    else if (choice == "DP")
        ls->deletePosition(para1);
    else if (choice == "GI")
        ls->getItem(para1);
    ls->printItems();
}


