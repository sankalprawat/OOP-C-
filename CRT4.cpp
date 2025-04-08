#include <iostream>
using namespace std;

class Car {
    public:
    int price ;
    int speed ;
    string model_number ;
    float kilometer ;
};

int main() {
    Car c1 ;
    c1.price = 1500000 ;
    c1.speed = 80 ;
    c1.model_number = "Taigun" ;
    c1.kilometer = 555 ;

    cout << "-------- Car Details --------" << endl ;
    cout << "   1. Price: " << c1.price << endl ;
    cout << "   2. Speed: " << c1.speed << endl ;
    cout << "   3. Name: " << c1.model_number << endl ;
    cout << "   4. Odometer: " << c1.kilometer << endl ;
    cout << "------------------------------" << endl ;

    return 0;
}
