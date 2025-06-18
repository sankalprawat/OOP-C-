// Create a upper triangle and lower triangle matrix 
// ,
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

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j > i) {
                matrix[i][j] = 0 ;
            }
        }
    }

    cout << "Lower triangle: " << endl ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " " ;;
        }
        cout << endl ;
    }
    return 0 ;
}