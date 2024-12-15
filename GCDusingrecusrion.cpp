#include <iostream>
using namespace std;

// Recursive function to find GCD
int gcd(int a, int b) {
    // Base case: when b becomes 0, GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive step: GCD of b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate GCD
    int result = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
