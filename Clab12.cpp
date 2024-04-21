// WAP in C++ to implement unary operator overloading
// (++) used as prefix and postfix

#include <iostream>
using namespace std;

class myClass {
private:
    int number;

public:
    myClass(int num){
        number = num ;
    }
    
    void display() {
        cout << "Result : " << number << endl ;
    }
   
   void operator ++(){
       ++number ;
   }

   void operator ++(int) {
    number++ ;
   }
    
};

int main() {
    myClass num1(0) ;
    myClass num2(2) ;
 
    ++num1 ;
    num2++ ;
    num1.display() ;
    num2.display() ;

    return 0;
}