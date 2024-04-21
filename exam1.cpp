#include <iostream>
using namespace std ;

class Complex {
private :
    int real , imag ;
public:
    Complex(int r = 0, int i = 0) {
        real = r ;
        imag = i ;
    }

    Complex operator+(Complex &obj) {
        Complex temp ;
        temp.real = real + obj.real ;
        temp.imag = imag + obj.imag ;
        return temp ;
    }

    void print(){
        cout << real << " + " << imag << "i" << endl ;
    }

    friend ostream& operator<< (ostream& out, Complex object){
        out << object.real << " + " << object.imag << "i" ;
        return out ;
    }

} ;

int main() {
    Complex C1(12,5) , C2(5,10) ;
    Complex C3 = C1 + C2 ;
    C3.print() ;
    cout << C3 ;
    return 0 ;
}