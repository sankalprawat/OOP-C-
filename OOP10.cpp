#include <iostream>
using namespace std ;

class complex {
    private : 
    int real, imag ;
    public:
    complex() : real(0), imag(0) {}

    complex(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }

    complex operator+(complex &obj) {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void putData() {
        cout << real << " + " << imag << "i" << endl ;
    }
};
int main () {
    complex C1(10,20), C2(7,17) ;
    complex C3 = C1 + C2 ;
    C3.putData();
    return 0 ;
}