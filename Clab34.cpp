// Insert Element in Array: Write a program that inserts an element at a specified index in an array.

#include <iostream>
using namespace std;

void insertElement(int arr[], int size, int element, int index) {
    arr[index] = element ;
    arr[size] = arr[index] ;
}

int main() {
    int arr[] = {29, 27, 3, 15, 5} ;
    int element, index ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    cout << "Enter the element you want to enter : " ;
    cin >> element ;

    cout << "Enter the index number you want to change : " ;
    cin >> index ;

    insertElement(arr, size, element, index) ;

    cout << "Updated array : " ;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " " ;
    }
    
    return 0;
}