#include <iostream>
#include <string>

class Employee {
protected:
  std::string name;
  int id;

public:
  Employee(const std::string& name = "", int id = 0) : name(name), id(id) {}

  virtual void displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
  }

  std::string getName() const {
    return name;
  }

  int getId() const {
    return id;
  }
};

class GetData : public Employee {
public:
  GetData() : Employee() {}

  void getInput() {
    std::cout << "Enter employee name: ";
    std::getline(std::cin, name);

    std::cout << "Enter employee ID: ";
    std::cin >> id;
    std::cin.ignore(); // Consume newline character
  }
};

class PutData : public Employee {
public:
  PutData(const std::string& name = "", int id = 0) : Employee(name, id) {}

  void displayData() {
    Employee::displayInfo(); // Call inherited displayInfo function
  }
};

int main() {
  GetData getDataObj;
  getDataObj.getInput();

  PutData putDataObj(getDataObj.getName(), getDataObj.getId());
  putDataObj.displayData();

  return 0;
}
