// Array of Squares: Create a C++ program that modifies an array by squaring each of its elements.
#include <iostream>
using namespace std;

void sqrtArr(int arr[], int size) {
  for (int i = 0; i < size; i++)
  {
    arr[i] = arr[i] * arr[i] ;
  }
  
}

int main() {
    int arr[] = {29, 27, 3, 15, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    sqrtArr(arr, size);

    cout << "Modified array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
        
    
    return 0;
}