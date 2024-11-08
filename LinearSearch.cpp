#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size-1; i++) {
        if (arr[i] == key) {
            return i ;
        } 
    }
    return -1 ;
}

int main () {
    int arr[6] = {2,10,5,4,15,6} ;
    int key ;
    cout << "Enter the number to be found: " ;
    cin >> key ;
    int result = linearSearch(arr, 6, key);
    if (result == -1) {
        cout << "Element not found! " << endl ;
    } else {
        cout << "Element found at index: " << result << endl ;
    }
    return 0; 
}