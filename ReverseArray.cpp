#include <iostream>
using namespace std ;

int main () {
    int arr[] = {5,7,1,4,8,3} ;
    int size = sizeof(arr)/sizeof(arr[0]);
    int revArr[size];
    int count = 0 ;
    for (int i = size -1 ; i >= 0; i--) {
        revArr[count] = arr[i] ;
        count ++ ;
    } 
    cout << "Original array: " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl ;
    cout << "Reversed array: " ;
    for (int i = 0; i < size; i++)
    {
        cout << revArr[i] << " "; 
    }
    return 0;
    
}