// WAP in C++ to implement binary operator overloading by subtracting 2 complex no by taking input from the user

#include <iostream>
using namespace std ;

class Complex{
private :
 int real , imag ;

public :
  Complex(int r = 0 , int i = 0){
    real = r ;
    imag = i ;
  }

  void display() {
    cout << real << " - " << imag << "i" << endl ;
  }

  Complex operator-(Complex C){
    Complex temp ;
    temp.real = real - C.real ;
    temp.imag = imag - C.imag ;
    return temp ;
  }

};

int main() {

    int real1 , imag1 ;
    int real2 , imag2 ;

    cout << "Enter the first complex number: " ;
    cin >> real1 >> imag1;

    cout << "Enter the second complex number: " ;
    cin >> real2 >> imag2 ;

    Complex C1(real1, imag1);
    Complex C2(real2,imag2); 
    Complex C3 = C1 - C2 ;

    C3.display() ;

    return 0;

}