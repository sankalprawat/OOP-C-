// Delete Element from Array: Implement a function to delete an element at a specified index from an array
#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index" << endl;
        return;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2;
    deleteElement(arr, size, index);
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
