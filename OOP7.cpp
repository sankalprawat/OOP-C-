#include <iostream>
using namespace std ;

class Employee {
    private :
    string name, ID, department ;
    int salary = 50000, employeePerformancePoints ;
    public:
    void getdata() {
            cout << "----- Welcome -----" << endl;
    
    cout << "Enter employee name: ";
    getline(cin, name);
    
    cout << "Enter your ID: ";
    cin >> ID;
    cin.ignore(); // Clear the input buffer
    
    cout << "Enter your department: ";
    getline(cin, department);
    
    cout << "Enter your Employee Performance Points (1-10): ";
    cin >> employeePerformancePoints;
    cin.ignore();
    }
    void displayNetSalary() {
        salary *= employeePerformancePoints ;
        cout << "Net Salary : " << salary << endl ;
    }
    void putData() {
        cout << "\n\n" ;
        cout << "----- Here is the information you have entered along with your net salary -----" << endl;
        cout << "Name : " << name << endl;
        cout << "ID : " << ID << endl;
        cout << "Department : " << department << endl;
        displayNetSalary() ;
        cout << "----- Thank you for using our services -----" << endl ;
    }
};
int main () {
    Employee E1 ;
    E1.getdata() ;
    E1.putData();
}