#include<iostream>
#include<string>
using namespace std ;

class inputData{
    protected: 
    void getInput(string &name, int &age, int &salary, int &ID) {
        cin.ignore();
        cout << "Enter the name of employee : " ;
        getline(cin, name);
        cout << "Enter the age of employee : " ;
        cin >> age ;
        cout << "Enter the salary of employee : " ;
        cin >> salary ;
        cout << "Enter the ID of employee : " ;
        cin >> ID ;
        cin.ignore() ;
    }
};
class outputData{
    protected: 
    void putOutput(string name, int age, int salary, int ID) {
        cout << "------- Employee Details -------" << endl ;
        cout << "Name of the employee is : " << name << endl ;
        cout << "Age of the employee is : " << age << endl ;
        cout << "Salary of the employee is : " << salary << endl ;
        cout << "ID of the employee is : " << ID << endl ;
    }
};
class Employee : protected inputData, outputData {
    private: 
    string name ;
    int age, salary, ID ;
    public: 
    void getEmpDetails() {
        getInput(this->name, this->age, this->salary, this->ID);
    }
    void displayEmpDetails() {
        putOutput(this->name, this->age, this->salary, this->ID);
    }
};

int main () {
    int n ;
    cout << "Enter the number of employee you want to add data of : " ;
    cin >> n ;
    Employee emp[n] ;
    for (int i = 0 ; i < n ; i++) {
        emp[i].getEmpDetails() ;
    }
    for (int i = 0; i < n; i++)
    {
        emp[i].displayEmpDetails();
    }
    
    return 0 ;
}