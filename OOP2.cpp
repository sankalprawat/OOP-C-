#include<iostream>
# define PI 3.14
using namespace std ;

class circle {
    private :
    float radius ;
    public : 
    void getRadius() {
        cout << "Enter the radius of the circle : " ;
        cin >> this->radius ;
    }
    void displayArea() {
        cout << "\nArea of circle is : " << PI*(this->radius*this->radius) ;
    }
    void displayCirumfrence() {
        cout << "\nCircumfrence of circle is : " << 2*PI*this->radius ;
    }
};

int main () {
    circle C1 ;
    C1.getRadius() ;
    C1.displayArea() ;
    C1.displayCirumfrence() ;
    return 0 ;
}