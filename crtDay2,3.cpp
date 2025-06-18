// Create a matrix and calculate forward and backward diagonal sum 
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

    int forwardSum = 0 ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                forwardSum += matrix[i][j] ;
            }
        }
    }
    cout << "Forward sum: " << forwardSum << endl ;
    int backWardSum = 0 ; 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i+j == 2) {
                backWardSum += matrix[i][j] ;
            }
        }
    }

    cout << "Backward sum: " << backWardSum << endl ;

    return 0 ;
}