#include<bits/stdc++.h>
using namespace std ;

int nonKindex(int nums[], int k, int n) {
    int count = 0 ;
    for (int i = 0; i < n; i++) {
        if (nums[i] != k) count++ ;
    }
    return count ; 
}

int main () {
    int n ;
    cout << "Enter the size of the array: " ;
    cin >> n ;
    int k ;
    int arr[n] ;
    cout << "Enter the elements of the array: " ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    cout << "Enter the value of K: " ;
    cin >> k ;
    
    cout << "Non k elemetns are: " << nonKindex(arr,k,n) << endl;

    return 0; 
}