#include <iostream>

using namespace std;

class hello_world
{
private:
    int a, b;

public:
    hello_world()
    {
        cout << "The constructor is called ." << endl;
    }

    ~hello_world()
    {
        cout << "The destructor is called .";
    }
};

int main()
{

    hello_world A;

    return 0;
}