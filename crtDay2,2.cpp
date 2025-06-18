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

    int res[3] = {0} ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res[i] += matrix[i][j] ;
        }
    }
    cout << "Result: " << endl ;
    for (int i = 0; i < 3; i++) {
        cout << res[i] << " " ;
    }
    return 0 ;
}