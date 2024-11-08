// WAP in C++ to implement Virtual base class

#include <iostream>
using namespace std;

class shape {
public:
    virtual void getArea() = 0;
};

class rectangle : public shape {
 int lenght , breadth ;
public:
    rectangle(int lenght = 0, int breadth = 0) {
        this->lenght = lenght ;
        this->breadth = breadth ; 
    }
    void getArea() {
        cout << lenght*breadth << endl;
    }
};

int main () {
    shape *Shape ;
    rectangle r1(10,20) ;
    Shape = &r1 ;
    Shape->getArea() ;
    return 0 ;
}