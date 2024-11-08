#include <iostream>
using namespace std; 

class Student {
    private:
    string fname;
    string lname;
    string rollNo;
    string courses;
    float cgpa;

    public:
    void inputFname() {
        cout << "Enter student's first name: ";
        cin >> fname;
    }

    void inputLname() {
        cout << "Enter student's last name: ";
        cin >> lname;
    }

    void inputRollNo() {
        cout << "Enter Roll no: ";
        cin >> rollNo;
    }

    void inputCourses() {
        cout << "Enter the course registered (BCA, MCA, BBA, MBA, BCOM, MCOM, BTECH, MTECH, etc.): ";
        cin >> courses;
    }

    void inputCgpa() {
        cout << "Enter the CGPA of the student: ";
        cin >> cgpa;
    }

    void displayDetails() {
        cout << "---------------- Details of Student ------------" << endl;
        cout << "Name: " << fname + " " + lname << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Course registered: " << courses << endl;
    }
};

int main() {
    int size;
    cout << "Enter the number of students you want to record: ";
    cin >> size;

    Student student[size];

    for (int i = 0; i < size; i++) {
        cout << "\nEnter the details of student " << i + 1 << ":" << endl;
        student[i].inputFname();
        student[i].inputLname();
        student[i].inputRollNo();
        student[i].inputCourses();
        student[i].inputCgpa();
    }

    cout << "\n\nDisplaying details of all students:\n" << endl;
    for (int i = 0; i < size; i++) {
        student[i].displayDetails();
    }

    return 0;
}
