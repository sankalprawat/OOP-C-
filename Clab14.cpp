// WAP in C++ to implement all arithmetic operation using pointers by taking input from the user

#include <iostream>
using namespace std;

int main()
{  
    int *num1 = new int();
    int *num2 = new int();
    char *opr = new char() ;

    cout << "Enter the first number : ";
    cin >> *num1;
    cout << "Enter the operator(+, -, *, /, %): ";
    cin >> *opr;
    cout << "Enter the second number : ";
    cin >> *num2;

    switch (*opr)
    {
    case '+':
        cout << "Addtion : " << *num1 + *num2 ;
        break;

        case '-':
        cout << "Subtraction : " << *num1 - *num2 ;
        break;

        case '*':
        cout << "Multiplication : " << (*num1) * (*num2) ;
        break;

        case '/':
        cout << "Division : " << *num1 / *num2 ;
        break;

        case '%':
        cout << "Modulus : " << *num1 % *num2 ;
        break;
    
    default:
        cout << "Please enter the correct operator!" ;
        break;
    }

    delete num1, num2, opr ;

    return 0 ;


}
