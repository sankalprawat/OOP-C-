#include <iostream>
using namespace std;
#define PI 3.14 

class Shape {
public:
    virtual double getArea() const = 0;
};

class Rectangle : public Shape {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    double getArea() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return PI * ( radius * radius);
    }
};

class Triangle : public Shape {
private:
    int base;
    int height;

public:
    Triangle(int b, int h) : base(b), height(h) {}

    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rect(5, 10);
    Circle circle(3);
    Triangle triangle(4, 6);

    cout << "Area of rectangle: " << rect.getArea() << endl;
    cout << "Area of circle: " << circle.getArea() << endl;
    cout << "Area of triangle: " << triangle.getArea() << endl;

    return 0;
}
