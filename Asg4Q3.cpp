// Program to swap value of two variable without using third variable and by pointers

#include <iostream>

using namespace std ;

void swap(int* a, int* b) {
    *a = *a + *b ;
    *b = *a - *b ;
    *a = *a - *b ;
}

int main () {
    int a = 10 , b = 20 ;
    cout << "Value of a is : " << a << " and b is : " << b << " before swapping ." << endl ;

    swap(&a, &b) ;

    cout << "Value of a is : " << a << " and b is : " << b << " after swapping ." ;

    return 0 ;

}