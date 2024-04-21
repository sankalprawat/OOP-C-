#include <iostream>

using namespace std;

class student
{
private:
    int a, b;

public:
    static int inputNum(int p, int q)
    {
        int c = p + q;
        return c;
    }
};

int main()
{
    int num1, num2, result;

    cout << "Enter the 1st no.: ";
    cin >> num1;

    cout << "Enter the 2nd no.: ";
    cin >> num2;

    result = student::inputNum(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
