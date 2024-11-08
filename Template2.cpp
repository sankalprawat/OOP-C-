#include <iostream>
using namespace std ;

template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0 ; i < n-1; i++) {
        for(int j = 0 ; j < n-i-1 ; j++) {
            if (a[j] > a[j+1]) {
                T temp = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = temp ;
            }
        }
    }
}

int main () {
    int x[5] = {12, 10, 15, 29, 27} ;
    float y[5] = {12.9, 10.15, 15.10, 29.27, 27.29} ;
     
    bubbleSort(x, 5) ;
    bubbleSort(y, 5) ;

    cout << "Sorted x-array : " << endl ;
    for (int i = 0 ; i < 5 ; i ++ ) {
    cout << x[i] << " " ;
    }
    
    cout << endl ;

    cout << "Sorted y-array : " << endl ;
    for (int i = 0 ; i < 5 ; i ++ ) {
    cout << y[i] << " " ;
    }
 

    return 0 ;
}
