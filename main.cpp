#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of " << i + 1 << "st student :" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "The marks of " << i + 1 << "st student is : " << arr[i] << endl;
    }

    return 0;
}