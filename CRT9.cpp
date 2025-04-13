#include <iostream>
using namespace std ;

class Constr {
    public: 
    int x ;
    Constr (int x) {
        this->x = x ;
        cout << "Running " << endl ;
    }
    Constr(Constr &o){
        this->x = o.x ;
    }
    void print() {
        cout << x << endl;
    }
    ~Constr() {
        cout << "Destruction"  << endl;
    }
};

int main () {
    Constr obj(5) ;
    Constr onj2(obj) ;
    onj2.print();
    obj.print();
    return 0 ;

}