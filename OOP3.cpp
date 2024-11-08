#include<iostream>
using namespace std ;

class Rectangle{
    int lenght, width ;
    public : 
    void getData() {
        cout << "Enter the lenght of the rectangle : " ;
        cin >> lenght ;
        cout << "Enter the width of the rectangle : " ;
        cin >> width ;
    }
    void getArea_perimeter() {
        cout << "\nArea of the rectangle is : " << lenght*width ;
        cout<<"\nPerimeter of the rectangle is : " << 2*(lenght+width) ;
    }
};
int main () {
    Rectangle R1 ;
    R1.getData() ;
    R1.getArea_perimeter() ;
    return 0 ;
}