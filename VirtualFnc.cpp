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
    void getArea() override {
        cout << lenght*breadth << endl;
    }
};

class square : public shape {
    int side ;
    public : 
    square(int side = 0) {
        this->side = side ;
    }
    void getArea() override {
        cout << side*side << endl ;
    }
};

int main () {
    shape *Shape ;
    rectangle r1(10,20) ;
    square s1 (20) ;
    Shape = &r1 ;
    Shape->getArea() ;
    Shape = &s1 ;
    Shape->getArea() ;
    return 0 ;
}