#include <iostream>

using namespace std;

bool isArraySortedRecursive(int A[], int n) {
    if (n <= 1) {  
        return true;
    }

    if (A[n - 1] < A[n - 2]) {  
        return false;  
    }

    return isArraySortedRecursive(A, n - 1);
}

int main() {
    int arr[] = {29, 69, 78, 52, 27};
    cout << "The array is ";
    if (isArraySortedRecursive(arr, 5)) {
        cout << "sorted" << endl;
    } else {
        cout << "not sorted" << endl;
    }
    return 0;
}
