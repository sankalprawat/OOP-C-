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
    int a , b ;
    cout<<"Enter two numbers : " ;
    cin >> a >> b ;
    obj.inputData(a, b);
    obj.display();
    return 0;
}
