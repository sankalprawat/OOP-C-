#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
private:
    string name;

public:
    Student(string name_s)
    {
        name = name_s;
    }

    string getname()
    {
        return name;
    }
};

bool compareName(Student S1, Student S2)
{
    return S1.getname() < S2.getname();
}

int main()
{
    int n;
    cout << "Enter the number of students you want to compare the name of : ";
    cin >> n;
    vector<Student> students;
    for (int i = 0; i < n; i++)
    {
        string name;
        cout << "Student " << i + 1 << " name : ";
        cin >> name;
        students.push_back(Student(name));
    }
    cout << "Here are the names arranged in alphabetical order: " << endl;
    sort(students.begin(), students.end(), compareName);
    for (Student &students : students)
    {
        cout << students.getname() << endl;
    }
    return 0;
}