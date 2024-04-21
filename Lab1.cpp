#include <iostream>

using namespace std; 

class ComplexNo {
private :
    double real; 
    double imag;

public :    
    void init(double realNum, double imagNum) {
        real = realNum;
        imag = imagNum;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    ComplexNo num1; 

    num1.init(2.5, 3.7);

    cout << "Complex number: ";
    num1.display();

    return 0;
}
