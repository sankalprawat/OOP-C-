#include <iostream>
using namespace std ;

int main () {
    int n ; 
    cout << "Enter the number of elements you want in the array: " ;
    cin >> n ;

    int arr[n] ;
    cout << "Enter the elements of the array: " ;
    for(int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    cout << "Array before sorting: " ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl ;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 -i ; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    cout << "Array after sorting: " ;
    for (int i = 0; i < n ; i++) {
        cout << arr[i] << " " ;
    }
    return 0 ;
}