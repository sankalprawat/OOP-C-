#include <iostream>

using namespace std; 

class Addition {
public:
    void inputData(int p, int q) {
        a = p;
        b = q;
    }

    void display() {
        cout << "Addition: " << a + b << endl; 
    }

private:
    int a, b; 
};

int main() {
    Addition obj; 
    obj.inputData(25, 35);
    obj.display();
    return 0;
}
