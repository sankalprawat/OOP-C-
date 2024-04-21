#include <iostream>
using namespace std ;

int sum(int *num1, int *num2) {
    return *num1 + *num2 ;
}

int main() {
    int num1 , num2 ;
    cout << "Enter the first number : ";
    cin >> num1 ;
    cout << "Enter the second number : ";
    cin >> num2 ;

    cout << "The sum of two numbers is : " ;
    cout << sum(&num1, &num2) ;

    return 0 ;
    
}

