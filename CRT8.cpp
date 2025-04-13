// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

int main() {
    // Write C++ code here
    int a = 6 ;
    int b = 0 ;
    while (a < 10) {
        a = a / 12 + 1 ;
        a += b ;
    }
    cout << a ;

    return 0;
}