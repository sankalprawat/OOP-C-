#include <iostream>

using namespace std ;

int main () {
    float num1 , num2 ;
    char opr ;
    
    cout << "Enter the first number : " ;
    cin >> num1 ;

    cout << "Enter the operator (+ , - , * , /) :" ;
    cin >> opr ;

    cout << "Enter the second number : " ;
    cin >> num2 ;

    switch (opr) {
        case '+' :
        cout << num1 + num2 ;
        break;

        case '-' :
        cout << num1 - num2 ;
        break;

        case '*' :
        cout << num1 * num2 ;
        break;

        case '/' :
        if(num2 != 0){
        cout << num1 / num2 ;}
        else {
            cout << "Division by 0 not possible ! " ;
        }
        break;

        default : 
        cout << "Enter correct operator !" ;
        break;
    }

    return 0 ;
}