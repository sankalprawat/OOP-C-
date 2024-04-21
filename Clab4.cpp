#include <iostream>

using namespace std;

class employee
{
private:
    string name;
    float salary;
    string MobileNo;
    string Id;
    string Dept;

public:
    void get_data()
    {
        cout << "Enter name :" << endl;
        cin >> name;
        cout << "Enter Salary :" << endl;
        cin >> salary;
        cout << "Enter Mobile No. :" << endl;
        cin >> MobileNo;
        cout << "Enter ID :" << endl;
        cin >> Id;
        cout << "Enter Department :" << endl;
        cin >> Dept;
    }

    void put_data()
    {
        cout << endl;
        cout << "The details of Employyes are :\n";
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << "Mobile Number : " << MobileNo << endl;
        cout << "ID : " << Id << endl;
        cout << "Department : " << Dept << endl;
    }
};

int main()
{
    employee emp[5];
    int n;
    cout << "Enter the number of employees you want to enter the data of :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        emp[i].get_data();
    }

    for (int i = 0; i < n; i++)
    {
        emp[i].put_data();
    }

    return 0;
}