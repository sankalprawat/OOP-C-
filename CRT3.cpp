#include <iostream>
using namespace std;

int main () {
    int arr[5];

    cout << "Enter the values of the array: " ;
    for (int idx = 0; idx < 5 ; idx++) {
        cin >> arr[idx] ;
    }

    cout << "[" ;
    for (int idx = 0; idx < 5; idx++) {
        cout << arr[idx] ;
        if (idx == 4) continue ;
        cout << " " ;
    }
    cout << "]" << endl;
    return 0 ;
}