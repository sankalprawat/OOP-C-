// Print Array in Reverse: Write a program that prints all elements of an array in reverse order without actually reversing the array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 10, 4, 1, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Reversed Array : " ;
    for (int i = size - 1; i >= 0 ; i-- ) {
     cout << arr[i] << " " ;
    }

    return 0;
}