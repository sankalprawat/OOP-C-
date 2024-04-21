/* WAP in C++ to implement hierarchical inheritance
   Class bus : Public Vehicles
   Class cars : Public Vehicles */

#include <iostream>
using namespace std;

class Vehicles {
private:
    int wheels;
    string color;

public:
    Vehicles(int C_wheels, string C_color) {
        wheels = C_wheels;
        color = C_color;
    }

    void display() {
        cout << "Color: " << color << endl;
        cout << "Wheels: " << wheels << endl;
    }
};

class Bus : public Vehicles {
public:
    Bus(int C_wheels, string C_color) : Vehicles(C_wheels, C_color)
     {

     }
};

class Car : public Vehicles {
public:
    Car(int C_wheels, string C_color) : Vehicles(C_wheels, C_color) 
    {
        
    }

};

int main() {
    
    Bus myBus(6, "Yellow");
    Car myCar(4, "Blue");

    cout << "My bus information : " << endl ;
    myBus.display();
    cout << endl ;
    cout << "My car information : " << endl ;
    myCar.display();
    
    return 0;
}