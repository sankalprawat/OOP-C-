// WAP in C++ to illustarte dyanmic allocation and deallocation of memory (Using new and delete)
#include <iostream>
using namespace std ;

int main () {
    int *num1 = new int() ;
    int *num2 = new int() ;

    cout << "Enter the value of two numbers : " ;
    cin >> *num1 >> *num2 ;

    cout << "Addition of the given two number is : " << *num1 + *num2 ;

    delete num1, num2 ;

    return 0 ;
}
