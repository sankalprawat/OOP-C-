#include <iostream>

using namespace std;

class complex
{
private:
    int a, b;

public:
    complex()
    {
        a = b = 0;
        cout << "This is an empty constructor.";
    }

    complex(int p, int q)
    {
        a = p;
        b = q;
        cout << "This is a parameterized constructor.";
    }

    complex(complex &c)
    {
        a = c.a;
        b = c.b;

        cout << "This is a copy constructor.";
    }
};

int main()
{
    complex c1(5, 7);
    cout << endl;
    complex c2(c1);
    cout << endl;
    complex();

    return 0;
}