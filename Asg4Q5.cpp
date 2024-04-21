// Write a program to find the area of circle with the help of pointers

#include <iostream>
using namespace std ;

float area(float *radius) {
    return 3.14 * *radius * *radius ;
}

int main () {
    float r = 10 ;
    cout << "Area of a circle using pointers : " << area(&r) ;
    return 0 ;
}