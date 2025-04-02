#include <iostream>
#include <cmath>
using namespace std; 

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; 
        } 
    }
    return true;
}

int main () {
    int n; 
    cout << "Enter a number : " ;
    cin >> n ;
    if (isPrime(n)) {
        cout << "It's a prime number."; 
    } else {
        cout << "It's not a prime."; 
    }
    return 0; 
}