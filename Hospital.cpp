#include <iostream>

using namespace std;

class patient;

class doctor
{
private:
    string name;
    string specialization;

public:
    doctor(string name_d, string specialization_d)
    {
        name = name_d;
        specialization = specialization_d;
    }

    void assign_patient(patient &p, string illness);
};

class patient
{
private:
    string name;
    string illness;
    int age;

public:
    patient(string name_p, string illness_p, int age_p)
    {
        name = name_p;
        illness = illness_p;
        age = age_p;
    }

    friend void doctor::assign_patient(patient &p, string illness);
};

void doctor::assign_patient(patient &p, string illness)
{
    p.illness = illness;
    cout << "Patient " << p.name << " of age " << p.age << " assigned to Doctor " << name << " with specialization in " << specialization << endl;
}

int main()
{
    doctor d1("Naresh Trehan", "Cardiac Surgeon");
    patient p1("Rahul Jain", "Cardiac Arrest", 64);

    d1.assign_patient(p1, "Cardiac Arrest");

    return 0;
}
