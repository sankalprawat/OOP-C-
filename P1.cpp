#include <iostream>

using namespace std ;

class Person {
    public :
    string Name ;
    string DOB ;
    int Age ;
};

int main () {
    Person P1 , P2 , P3 ;
    cout << "Enter the name of 1st person :" ;
    cin >> P1.Name ;

    cout << "Enter the DOB : " ;
    cin >> P1.DOB ;

    cout << "Enter the age :" ;
    cin >> P1.Age ;

    cout << "Name : " << P1.Name << endl ;
    cout << "DOB : " << P1.DOB << endl ;
    cout << "Age : " << P1.Age << endl ;

    return 0 ;

}
