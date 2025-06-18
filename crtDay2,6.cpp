// Scalar product of a matrix 
#include<bits/stdc++.h>
using namespace std ;

int main () {
    int matrix[2][2] ;
    cout << "Enter the value of the matrix: " ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j] ;
        }
    }
    cout << "Enter the scalar value: " ;
    int k ;
    cin >> k ;
    cout << "Scalar Product: " << endl ;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j]*  k << " " ;
        }
        cout << endl ;
    }
    return 0 ; 
}