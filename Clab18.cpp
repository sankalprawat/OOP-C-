// WAP in C++ to change value of x by passing an argument to a function with a parameter
#include <iostream>
using namespace std ;

int increment(int* a) {
    return  ++(*a) ;
} 

int main () {
    int x = 10;
    cout << "Value of x before passing to an function : " << x << endl;

    increment(&x) ;

    cout << "Value of x after passing to an function : " << x ;

    return 0 ;
}
