// Program to call by value and call by reference 
#include <iostream>
using namespace std ;

int decrement (int a) {
    return --a ;
}

int increment(int &a) {
    return ++a ;}

int main () {

    int a = 5 ;

    cout << "Call by value : " << decrement(a) << endl ;
    cout << "Value of A is : " << a  << endl;

    cout << "Call by refrence : " << increment(a) << endl ;
    cout << "Value of A is : " << a  << endl;


    return 0 ;
}