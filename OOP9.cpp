#include <iostream>
using namespace std ;

class Person{
    protected:
    string course ;
    int age ;

};
class Student : protected Person{
    private:
    string name, Student_ID ;
    public : 
    void getData() {
        cout << "Enter your Course : " ;
        getline(cin, course);
        cout << "Enter your age : " ;
        cin >> age ;
        cin.ignore() ;
        cout << "Enter your name : " ;
        getline(cin, name);
        cout << "Enter your Student ID :" ;
        getline(cin , Student_ID) ;
        cin.ignore();
    }
    void putData () {
        cout << "\n\n" ;
        cout << "----- Here are the details you have entered -----" << endl ;
        cout << "Name : " << name << endl;
        cout << "Student ID : " << Student_ID << endl ;
        cout << "Course : " << course << endl ;
        cout << "Age : " << age << endl ;
    }
};
int main () {
    Student S1 ;
    S1.getData() ;
    S1.putData();
    return 0 ;
}