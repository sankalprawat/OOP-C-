#include <iostream>
using namespace std; 

int main () {
    int n ;
    cout << "Enter the number of elements you want to add in array: " ;
    cin >> n ;

    int arr[n] ;

    cout << "Enter the elements of array: " << endl ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 ; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    cout << "Sorted array: " << endl ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    return 0;


}