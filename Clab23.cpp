// Find the Minimum Value: Write a program to find the minimum value in an array of integers.
#include <iostream> 
using namespace std ;

int findMin(int arr[], int size) {
  int minVal = arr[0] ;

  for (int i = 0; i < size; i++) {
    if (arr[i] < minVal) {
        minVal = arr[i] ;
    }
  } 
  return minVal ;
}

int main () {
    
    int arr[] = {3, 10, 4, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int min_element = findMin(arr, n);

    cout << "The minimum value in the array is: " << min_element << endl;

    return 0;
}