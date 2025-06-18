// Transpose of a matrix 
#include<bits/stdc++.h>
using namespace std ;

int main () {
    int matrix[3][3] ;
    cout << "Enter the value of the matrix: " ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j] ;
        }
    }

    cout << "Transpose of a matrix: " << endl ; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl ;
    }
    return 0 ;
}