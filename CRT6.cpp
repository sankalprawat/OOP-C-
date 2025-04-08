#include <iostream>
using namespace std; 
static int count = 0 ;

class Demo{
    int x, y ;
    public: 
    Demo (int x, int y) {
        this->x = x ;
        this->y = y ;
        cout << "I'm inside paramerterized constructor.\n" ;
    }

    Demo () {
        cout << "This is non-paramerterized constructor\n" ;
    }

    Demo (Demo &obj) {
        this->x = obj.x;
        this->y = obj.y ;
        cout << "This is a copy constructor.\n";
        cout << x << " " << y << "\n" ;
    }
    ~Demo () {
        count++ ;
        cout << "Destructor called for " << count <<"st object.\n" ;
    }
};

int main () {
    Demo d1(5,10) ;
    Demo d2(d1);
    Demo d4[3] ;
    
    return 0 ;
}