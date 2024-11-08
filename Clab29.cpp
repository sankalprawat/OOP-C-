// Element Frequency: Write a program that counts the frequency of each element in an array.
#include <iostream>
using namespace std;

void countElementFrequency(int arr[], int size) {
  int freqArr[size] = {0}; 
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j]) {
        freqArr[j]++; 
        break; 
      }
    }
  }

  cout << "Element Frequency:" << endl;
  for (int i = 0; i < size; i++) {
    if (freqArr[i] > 0) { 
      cout << arr[i] << " : " << freqArr[i] << endl;
    }
  }
}

int main() {
  int arr[] = {1, 2, 2, 3, 1, 4, 5, 2};
  int size = sizeof(arr) / sizeof(arr[0]);

  countElementFrequency(arr, size);

  return 0;
}
