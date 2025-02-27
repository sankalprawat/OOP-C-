#include <iostream>
using namespace std; 

void sort (int arr[], int n) {
    for (int i = 0; i < n -1; i++ ) {
        for (int j = 0; j < n -1 -i; j++) {
            if (arr[j] > arr [j+1]) {
                int temp = arr[j] ;
                arr[j] = arr[j+1]; 
                arr[j+1] = temp ; 
            }
        }
    }
}

bool isEqual (int arr1[], int arr2[], int n) {
    for (int i = 0; i < n ; i++) {
        if (arr1[i] != arr2[i]) {
            return false ;
        } 
    }
    return true ;
}

int main () {
    int A1 [] = {3,9,6,3,4,9,1,6}, A2 [] = {6,6,3,4,9,3,1,9} ;
    int n = sizeof(A1)/sizeof(A1[0]);
    sort(A1, n) ;
    sort(A2, n) ;
    if (isEqual(A1, A2, n)) {
        cout << "YES" ;
    } else {
        cout << "NO" ;
    }
    return 0 ;
}