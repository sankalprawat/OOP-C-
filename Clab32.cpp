// Sum of Odd Numbers: Write a program to calculate the sum of all odd numbers in an array.
#include <iostream>
using namespace std;

int sumOddElements(int arr[], int size) {
   int sum = 0 ;
   for (int i=0; i < size ; i++) {
    if (arr[i] % 2 != 0) {
        sum += arr[i] ;
    }
   } 
   return sum ;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sumofodd = sumOddElements(arr, size) ;
    cout << "Sum of all odd elements is : " << sumofodd << endl ;
    
    return 0;
}