#include <iostream>
using namespace std ;



int main () {
    int a = 15, b = 10;

    cout << "Value of A before swapping: " << a << endl;
    cout << "Value of B before swapping: " << b << endl ;
    
    // int temp = a ;
    // a = b ;
    // b = temp ;

    // cout << "Value of A after swapping: " << a << endl ;
    // cout << "Value of B after swapping: " << b << endl ;

    // int c = 20, d = 25 ;

    // cout << "Value of C before swapping: " << c << endl;
    // cout << "Value of D before swapping: " << d << endl ;

    // c = c + d;
    // d = c - d;
    // c = c - d;


    // cout << "Value of C after swapping: " << c << endl ;
    // cout << "Value of D after swapping: " << d << endl ;

    // cout << a << " " << b << endl ;    

    a = a ^ b ;
    cout << a << " " << b << endl ;
    b = a ^ b ;
    cout << a << " " << b << endl ;
    a = a ^ b ;
    cout << a << " " << b << endl ;


    return 0;
}

// Swap the value of 10 variables with the jump of 2 without using temp variable