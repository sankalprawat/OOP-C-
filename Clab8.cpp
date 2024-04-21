/* Wap in C++ to implement friend function */

#include <iostream>

using namespace std ;

class Rectangle {
private:
  int width;
  int height;

public:
  Rectangle(int w, int h){
    width = w ;
    height = h ;
  }

  friend int getArea(Rectangle& rect);
};

int getArea(Rectangle& rect) {
  return rect.width * rect.height;
}

int main() {

  int lenght , width ;

  cout << "Enter the lenght of the rectangle : " ;
  cin >> lenght ;

  cout << "Enter the width of the rectangle : " ;
  cin >> width ;

  Rectangle rect(lenght, width);

  int area = getArea(rect);

  cout << "Area of the rectangle: " << area << endl;

  return 0;
}
