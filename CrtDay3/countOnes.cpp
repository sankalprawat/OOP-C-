#include<bits/stdc++.h>
using namespace std; 

int countOnes (vector<vector<int>> matrix) {
    int row = matrix.size() ;
    int col = matrix[0].size() ;
    int count = 0, rowCnt = -1, maxCount = -1 ;

    for (int i = 0; i < row; i++) {
        int count = 0;
        for (int j = 0; j < col ; j++) {
            if (matrix[i][j] != 0) {
                count++; 
            }
        }
        if (count > maxCount) {
                maxCount = count ;
                rowCnt = i ;
            }
    }
    return rowCnt + 1 ;
}

int main () {

    return 0 ;
}