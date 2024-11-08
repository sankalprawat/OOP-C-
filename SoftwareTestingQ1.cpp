#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    int emp_code, emp_salary;
    string emp_name, emp_desig;

public:
    void get_data() {
        cout << "Enter employee name: ";
        getline(cin, emp_name) ;
        cout << endl;
        cout << "Enter employee code: ";
        cin >> emp_code;
        cin.ignore() ;
        cout << endl;
        cout << "Enter employee designation: ";
        getline(cin, emp_desig);
        cout << endl;
        cout << "Enter employee salary: ";
        cin >> emp_salary;
        cout << endl;
        cin.ignore() ;
    }

    void put_data() {
        cout << "Name: " << emp_name << endl;
        cout << "Code: " << emp_code << endl;
        cout << "Designation: " << emp_desig << endl;
        cout << "Salary: " << emp_salary << endl;
    }
    
    
};

int main() {
    int size;
    cout << "Enter the number of employees you want to enter: ";
    cin >> size;
    cin.ignore() ;

    employee* emp = new employee[size];

    for (int i = 0; i < size; ++i) {
        emp[i].get_data();
    }

    cout << "Employee Details:" << endl;
    for (int i = 0; i < size; ++i) {
        emp[i].put_data();
    }

    delete[] emp;

    return 0;
}