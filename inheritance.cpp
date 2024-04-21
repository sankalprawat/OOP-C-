#include <iostream>

using namespace std;

class Base
{
private:
    int a;

public:
    void set_data()
    {
        cout << "Enter no :";
        cin >> a;
    }
    void display()
    {
        cout << a;
    }
};

class Derived : public Base
{
};

int main()
{
    Derived d;
    d.set_data();
    d.display();

    return 0;
}