// Linear Search: Implement a linear search algorithm to find a specified value in an array.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {3, 10, 4, 1, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = linearSearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
