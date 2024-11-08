// Find Second Largest Element: Implement a program to find the second largest number in an array.
#include <iostream>
using namespace std;

void sortingArr(int arr[], int size) {
   for(int i = 0; i < size; i++) {
    for(int j = 0; j < size - i - 1; j++ ) {
        if(arr[j] > arr[j+1]) {
            int temp = arr[j] ;
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;
        }
    } 
    }
}
int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sortingArr(arr, size) ;
    
    cout << "Second largest element of Array is : " << arr[size-2] ;

    return 0;
}