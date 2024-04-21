#include <iostream> 

using namespace std;

void TowerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    if (n == 1) {
        cout << "Move Disk 1 from tower " << fromPeg << " to tower " << toPeg << "\n";
        return;
    }

    TowerOfHanoi(n - 1, fromPeg, auxPeg, toPeg);

    cout << "\nMove Disk " << n << " from tower " << fromPeg << " to tower " << toPeg<<endl;

    TowerOfHanoi(n - 1, auxPeg, fromPeg, toPeg);
}

int main() {
    
    char sourcePeg = 'A';
    char destinationPeg = 'C';
    char auxiliaryPeg = 'B';

    TowerOfHanoi(3, sourcePeg, destinationPeg, auxiliaryPeg);

    return 0;
}
