/*WAP in C++ to call overwritten function from derived class*/
#include <iostream>

using namespace std;

class Shape {
public:
  virtual double getArea() const = 0;
};

class Rectangle : public Shape {
private:
  int width;
  int height;

public:
  Rectangle(int w, int h) 
   {
     width = w ;
     height = h ;
   }
  double getArea() const override {
    return width * height;
  }
};

int main() {
  int length, width;

  cout << "Enter the length of the rectangle: ";
  cin >> length;

  cout << "Enter the width of the rectangle: ";
  cin >> width;

  Rectangle rect(length, width);
  double area = rect.getArea();

  cout << "Area of the rectangle: " << area << endl;

  return 0;
}
