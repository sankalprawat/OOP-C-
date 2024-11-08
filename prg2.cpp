#include <iostream>
int multiplication (int num1, int num2) {
    return num1 * num2 ;
}
int factorial (int n) {
    if (n == 1) {
        return n ;
    }
    else 
    return n * factorial(n-1) ;
}
int main () {
    std::cout << multiplication(20,30) ;
    std::cout << std::endl ;i0['
    412.
     ']
    std::cout << factorial(5);
    return 0;
}
