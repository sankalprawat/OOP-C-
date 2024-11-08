#include <iostream>
using namespace std ;
class Person{
    string country, name ;
    int age ;
public:
    void setValues() {
        cout << "Enter the name of person :" ;
        getline(cin, name) ;
        cout << "Enter the country name : " ;
        getline(cin, country) ;
        cout << "Enter your age : " ;
        cin >> age ;
        cin.ignore();
    }
    void getValues() {
        cout << "\n\n" ;
        cout << "----- Details -----" << endl ;
        cout << "Name : " << name << endl ;
        cout << "Country name : " << country << endl ;
        cout << "Age : " << age << endl ;
    }
};
int main () {
    Person P1 ;
    P1.setValues() ;
    P1.getValues() ;
    return 0 ;
}