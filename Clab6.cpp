/*WAP in C++ to implement the concept of copy constructor*/

#include <iostream>

using namespace std ;

class constructor{
    private :
    int a , b ;

    public : 
    constructor(int x , int y){
        a = x ;
        b = y ;
    }

    constructor(constructor &c){
        a = c.a ;
        b = c.b ;
    }

    void display(){
        cout << "The sum of two numbers is : " << a + b << endl ;
    }
};

int main () {
    constructor C1(41 , 39) ;
    constructor C2(C1) ;
    C2.display() ;

    return 0 ;
}