#include<iostream>
using namespace std ;

template <class T> 
void swapping(T&a, T&b){
    T temp = a ;
    a = b ;
    b = temp ;
}

void fun(int m , int n , float a, float b) {
    cout << "m and n before swap : " << m << " " << n << endl ;
    swapping(m,n);
    cout << "m and n after swap : " << m << " " << n << endl ;

    cout << "a and b before swap : " << a << " " << b << endl ;
    swapping(a,b);
    cout << "a and b after swap : " << a << " " << b << endl ;

}

int main () {
    fun(100, 200, 300, 400);
    return 0 ;
}

