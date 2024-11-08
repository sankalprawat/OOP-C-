// Find the Nearest Larger Number: Write a function that, for each element in the array, finds the nearest element to the right that is larger than it.
#include <iostream>
using namespace std;

void findNearestLarger(int arr[], int size, int result[]) {
  for (int i = 0; i < size; i++) {
    result[i] = arr[i];
    for (int j = i + 1; j < size; j++) {
      if (arr[j] > arr[i]) {
        result[i] = arr[j];
        break; 
      }
    }
  }
}
int main() {
  int arr[] = {4, 1, 3, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int result[size];

  findNearestLarger(arr, size, result);

  cout << "Array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "Nearest larger element to the right (or element itself): ";
  for (int i = 0; i < size; i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
