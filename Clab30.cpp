// List All Unique Elements: Create a program that lists all unique elements in an array.
#include <iostream>

using namespace std;

void findUniqueElements(int arr[], int size) {
  // Flag array to mark visited elements (assuming non-negative integers)
  bool visited[size] = {false};

  // Iterate through the array
  for (int i = 0; i < size; i++) {
    // Check if the element is not visited before
    if (!visited[arr[i]]) {
      visited[arr[i]] = true; // Mark element as visited
      cout << arr[i] << " "; // Print the unique element
    }
  }
  cout << endl;
}

int main() {
  int arr[] = {1, 2, 2, 3, 1, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Unique elements in the array: ";
  findUniqueElements(arr, size);

  return 0;
}
