//tail recursive 
#include <iostream>
using namespace std;

int numDup(int arr[], int start, int size, int element){
    int dup = 0;

    if (arr[size - 1] == element)
        dup++;

    if (size > 1) 
        dup += numDup(arr, start, size-1, element);

    return dup;
}

int main() {
    int arr[5] = { 3, 2, 3, 2 ,3 };
    cout << "The number is" << endl;
    cout << numDup(arr, 0, 5, 2);
}