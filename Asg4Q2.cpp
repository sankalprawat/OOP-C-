#include <iostream>
using namespace std ;

void ArrFnc (int m, int* x) {
    for(int i = 0 ; i < m  ; i++) {
        cout << "The elements of array are : " << *(x+i) << endl ;
    }
}

int main () {
   int arr[5] = {10, 53, 29, 27, 24} ;

   ArrFnc(5, arr) ;

   return 0 ;
}