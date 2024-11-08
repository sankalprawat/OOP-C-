#include <iostream>
using namespace std ;
#define PI 3.14

class Shapes {
    public:
    virtual void area() = 0 ;
    virtual void perimeter() = 0 ;
};
class Rectangle : public Shapes  {
    private : 
    int length, width ;
    public: 
    void getData() {
        cout << "Enter the lenght of Rectangle : " ;
        cin >> length ;
        cout << "Enter the width of Rectangle : " ;
        cin >> width ;
    }
    void area () override {
        cout << "Area : " << length*width << endl;
    }
    void perimeter () override {
        cout << "Perimeter : " << 2*(length+width) << endl ;
    }
};
class Circle : public Shapes {
    private : 
    int radius ;
    public : 
    void getData () {
        cout << "Enter the radius of circle : " ;
        cin >> radius ;
    }
    void area() override {
        cout << "Area : " << PI*(radius*radius) << endl ;
    }
    void perimeter () override {
        cout << "Circumfrence : " << 2*PI*radius << endl ;
    }
};
class Triangle : public Shapes {
    private : 
    int height, base, hypoteneus ;
    public:
    void getData () {
        cout << "Enter the height of triangle : " ;
        cin >> height ;
        cout << "Enter the base of triangle : " ;
        cin >> base ;
        cout << "Enter the hypotenues of triangle : " ;
        cin >> hypoteneus ;
    }
    void area() override {
        cout << "Area : " << 0.5*(base*height) << endl;
    }
    void perimeter() override {
        cout << "Perimeter : " << height+base+hypoteneus << endl ;
    } 
};
int main () {
    Rectangle R1 ;
    Triangle T1 ;
    Circle C1 ;
    cout << "Enter the shape you want the area and perimeter of : " << endl ;
    cout << "1.Rectangle  2.Triangle 3.Circle  (1/2/3) : " ;
    int option ;
    cin >> option ;
    if (option == 1) {
        R1.getData() ;
        R1.area() ;
        R1.perimeter();
    } 
    else if (option == 2) {
        T1.getData() ;
        T1.area() ;
        T1.perimeter();
    }
    else if (option == 3) {
        C1.getData() ;
        C1.area() ;
        C1.perimeter();
    }
    else {
        cout << "Invalid Choice !" ;
    }
    return 0 ;
}