#include<bits/stdc++.h>
using namespace std ;

void sort2DArray(int arr[3][3]) {
    vector<int> a ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a.push_back(arr[i][j]);
        }
    }

    sort(a.begin(), a.end());

    cout << "Sorted array: " << endl ;

    for (int i = 0; i < 9; ++i) {
        arr[i / 3][i % 3] = a[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl ;
    }
}

int main () {
    int matrix[3][3] ;
    cout << "Enter the value of the matrix: " ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j] ;
        }
    }

    sort2DArray(matrix) ;

    return 0 ;
}