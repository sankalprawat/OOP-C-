#include <iostream>

using namespace std ;

inline float mul (float a, float b) {
   return(a*b);
}

inline float div (float a, float b) {
   return(a/b);
}

int main() {
    float a = 12.345 ;
    float b = 9.82 ;
    
    cout << mul(a,b) << endl ;
    cout << div(a,b) << endl ;

    return 0 ;
}