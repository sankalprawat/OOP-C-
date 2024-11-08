// 1.Sum of an Array: Write a program that calculates the sum of all elements in an array of integers.

#include <iostream>
using namespace std ;

int sumArr(int Arr[], int size) {
    int sum = 0 ;
    for (int i = 0; i < size ; i++ ) {
        sum += Arr[i] ;
    }

    return sum ;
}

int main () {
    int arr1[] = {4, 5, 18, 29, 27} ;

    int size = sizeof(arr1) / sizeof(arr1[0]) ;

    int result = sumArr(arr1, size) ;
    cout << result ;
    return 0 ;
}