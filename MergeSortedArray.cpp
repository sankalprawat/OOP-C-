#include <iostream>
using namespace std ;

int main () {
    int A[] = {1, 13, 22, 23, 24, 34, 37, 39, 40, 45} ;
    int B[] = {53, 54, 66, 91, 94};
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B)/sizeof(B[0]);
    int size = m + n ;
    int res[size];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (A[i] < B[j]) {
            res[k] = A[i] ;
            i++, k++ ;
        } else {
            res[k] = B[j] ;
            j++, k++ ;
        }
    }

     while (i < m) {
        res[k] = A[i];
        i++;
        k++;
    }

    while (j < n) {
        res[k] = B[j];
        j++;
        k++;
    }
    for (int i = 0; i < size ; i++) {
        cout << res[i] << " " ;
    }
    return 0 ;
}
