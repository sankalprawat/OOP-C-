/*Implement Hybrid inheritance using C++*/

#include <iostream>
using namespace std;

class Vehicle {
private:
  int wheels;
  string color;

public:
  Vehicle(int w, string c) : wheels(w), color(c) {}

  void printDetails()  {
    cout << "Wheels: " << wheels << endl;
    cout << "Color: " << color << endl;
  }
};

class Engine {
public:
  Engine(int hp, string fuel) : horsepower(hp), fuelType(fuel) {}

  void printEngineDetails()  {
    cout << "Horsepower: " << horsepower << endl;
    cout << "Fuel Type: " << fuelType << endl;
  }

private:
  int horsepower;
  string fuelType;
};

class LandVehicle : public Vehicle, public Engine { 
public:
  LandVehicle(int w, string c, int hp, string fuel) : Vehicle(w, c), Engine(hp, fuel) {}

  void printAll()  { 
    printDetails();
    printEngineDetails();
  }
};

int main() {
  LandVehicle car(4, "Blue", 150, "Gasoline");
  LandVehicle bus(6, "Yellow", 250, "Diesel");

  cout << "Car Details:" << endl;
  car.printAll();

  cout << "\nBus Details:" << endl;
  bus.printAll();

  return 0;
}
