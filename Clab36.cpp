// Count Prime Numbers in Array: Write a program to count how many prime numbers are present in an array.
#include <iostream>
using namespace std;

bool isPrime(int n) {
    int count=0;
    for(int i = 1; i <= n ; i++) {
        if(n % i == 0) {
            count ++ ;
        }
    }
    if (count == 2){
        return true ;
    }
    else {
        return false ;
    }
}

int countPrime (int arr[], int size) {
  int primeNum = 0 ;
  for (int i = 0; i < size; i++)
  {
    if(isPrime(arr[i])) {
        primeNum ++ ;
    }
  }
  return primeNum ;
  
}

int main() {
    int arr[] = {29, 27, 3, 15, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countPrime(arr, size) ;
    cout << result ;
    
    return 0;
}