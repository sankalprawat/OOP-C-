// Operator overloading
#include <iostream>
using namespace std ;

class Complex {
    public: 
    int real, imag;

    Complex () : real(0), imag(0) {}

    Complex (int real, int imag) {
        this->real = real ;
        this->imag = imag ;
    }

    Complex operator+(Complex &obj) {
        Complex temp ;
        temp.real = this->real + obj.real ;
        temp.imag = this->imag + obj.imag ;
        return temp ;
    }

    void putData () {
        cout << real << " " << imag << endl ;
    }
    
};

int main () {
    Complex C1(5,10), C2(20,15) ;
    Complex C3 = C1 + C2 ;

    C3.putData() ;

    return 0 ;
}