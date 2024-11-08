// Check for Palindrome Array: Create a C++ program that checks if an array is a palindrome.
#include <iostream>
using namespace std;

bool isPalindromeArray(int arr[], int size) {
  for (int i = 0; i < size / 2; i++) {
    if (arr[i] != arr[size - i - 1]) {
      return false; 
    }
  }
  return true;
}

int main() {
  int arr1[] = {1, 2, 2, 1};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);

  if (isPalindromeArray(arr1, size1)) {
    cout << "Array 1 is a palindrome." << endl;
  } else {
    cout << "Array 1 is not a palindrome." << endl;
  }
  return 0;
}
