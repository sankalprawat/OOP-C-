// WAP in C++ to implement all arithmetic operation using pointers by taking input from the user

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char opr;
   
    int *ptr1 = new int(num1);
    int *ptr2 = new int(num2);
    char *ptr3 = new char(opr) ;

    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the operator(+, -, *, /, %): ";
    cin >> opr;
    cout << "Enter the second number : ";
    cin >> num2;

    switch (opr)
    {
    case '+':
        cout << "Addtion : " << *ptr1 + *ptr2 ;
        break;

        case '-':
        cout << "Subtraction : " << *ptr1 - *ptr2 ;
        break;

        case '*':
        cout << "Multiplication : " << *ptr1 * *ptr2 ;
        break;

        case '/':
        cout << "Division : " << *ptr1 / *ptr2 ;
        break;

        case '%':
        cout << "Modulus : " << *ptr1 % *ptr2 ;
        break;
    
    default:
        cout << "Please enter the correct operator!" ;
        break;
    }

    delete ptr1, ptr2, ptr3 ;

    return 0 ;


}
