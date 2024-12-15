#include <iostream>
using namespace std;

// Recursive function to find frequency of T
int countFrequency(int arr[], int size, int T) {
    // Base case: when size becomes 0, return 0
    if (size == 0) {
        return 0;
    }

    // Check the first element
    int count = (arr[0] == T) ? 1 : 0;

    // Recursive call on the rest of the array
    return count + countFrequency(arr + 1, size - 1, T);
}

int main() {
    int A[] = {2, 4, 6, 6, 6, 7, 9, 11, 11, 15};
    int T = 6;
    int size = sizeof(A) / sizeof(A[0]);

    cout << "Frequency of " << T << " is: " << countFrequency(A, size, T) << endl;

    return 0;
}
