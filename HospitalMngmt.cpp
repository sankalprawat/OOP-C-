#include <iostream>
#include <string>

using namespace std;

class Patient {
public:
  string name;
  int age;
  string illness;

public:
  Patient(const string& n, int a, const string& i) : name(n), age(a), illness(i) {}
};

class Doctor {
public:
  string name;
  string specialization;

public:
  Doctor(const string& n, const string& spec) : name(n), specialization(spec) {}
};


ostream& operator<<(ostream& out, const pair<Patient, Doctor>& info) {
  out << "Patient Name: " << info.first.name << endl;
  out << "Age: " << info.first.age << endl;
  out << "Illness: " << info.first.illness << endl;
  out << "Doctor Name: " << info.second.name << endl;
  out << "Specialization: " << info.second.specialization << endl;
  return out;
}

int main() {
  Patient patient1("John Doe", 35, "Flu");
  Doctor doctor1("Jane Smith", "Internal Medicine");

  
  pair<Patient, Doctor> patientDoctorPair(patient1, doctor1);

  
  cout << patientDoctorPair << endl;

  return 0;
}
