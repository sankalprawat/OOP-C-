#include <iostream>
using namespace std ;

void swap (int &c, int &d) {
    c = c + d;
    d = c - d;
    c = c - d;
}

int main () {
    

    return 0 ;
}