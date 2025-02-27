#include <iostream>
using namespace std;

int main () {
    bool var = false; 
    cout << "Enter the elements of array: " ;
    int arr[5] ;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i] ;
    }

    cout << "Enter the target: " ;
    int target ;
    cin >> target ;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 ; j++) {
            if (i == j) continue;
            if (arr[i] + arr[j] == target) {
                cout << "YES" << endl;
                cout << "Target found at [" << i << " " << j << "]" << endl ;
                var = true ;
                break ;
            } 
       }
       if (var) break;
    }
    
}