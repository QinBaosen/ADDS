// head recursive
#include <iostream>
using namespace std;

int numDup(int arr[], int start, int size, int element) {
    int dup = 0;
    
    if (arr[start] == element) 
        dup++;

    if (start < size - 1) 
        dup += numDup(arr, start + 1, size, element);

    return dup;
}

int main() {
    int arr[5] = { 3, 2, 3, 2 ,3 };
    cout << "The number is" << endl;
    cout << numDup(arr, 0, 5, 2);
}
