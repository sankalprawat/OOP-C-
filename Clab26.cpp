// Reverse an Array: Implement a function to reverse an array of integers.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {

    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {3, 10, 4, 1, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size) ;
    cout << "Reversed array : " ;
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] << " " ;
    }
    
    return 0;
}