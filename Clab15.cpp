// WAP in C++ to handle division by zero exception

#include <iostream>
using namespace std ;

int main() {
    int num1 , num2 ;
    cout << "Enter the first number: " ;
    cin >> num1 ;
    cout << "Enter the second number: " ;
    cin >> num2 ;

    try
    {
        if(num2 > 0) {
            cout << "Division : "<< num1/num2 ;
        }
        else {
            throw("Division is not possible with 0 or number less than 0") ;
        }
    }
    catch(const char* error)
    {
        cout << "Error: " << error << endl;
    }
    

    return 0 ;
}