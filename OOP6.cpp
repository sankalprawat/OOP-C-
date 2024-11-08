#include <iostream>
using namespace std;

class Triangle {
private:
    int side1, side2, side3;

public:
    void checkEqui() {
        cout << "It's an Equilateral triangle." << endl;
    }
    
    void checkIso() {
        cout << "It's an Isosceles triangle." << endl;
    }
    
    void checkSca() {
        cout << "It's a Scalene triangle." << endl;
    }
    
    void inputSides() {
        cout << "Enter three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
    }
    
    void checkTriangle() {
        if (side1 == side2 && side2 == side3) {
            checkEqui();
        } else if (side1 == side2 || side2 == side3 || side3 == side1) {
            checkIso();
        } else {
            checkSca();
        }
    }
};

int main() {
    Triangle T1;
    T1.inputSides();
    T1.checkTriangle();
    return 0;
}
