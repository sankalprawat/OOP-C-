// Count Even and Odd Numbers: Write a program that counts the number of even and odd numbers in an array.
#include <iostream>
using namespace std ;

void countEvenOdd(int arr[], int size) {
    int even_count = 0, odd_count = 0 ;
    for(int i = 0; i < size ; i++) {
      if(arr[i] % 2 == 0) {
        even_count ++ ;
      } 
      else{
        odd_count++ ;
      }
    }
    cout << "Even Count : " << even_count << endl;
    cout << "Odd Count : " << odd_count << endl  ;
}

int main () {
    int arr[] = {3, 10, 4, 1, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    countEvenOdd(arr, size) ;

    return 0 ;
}