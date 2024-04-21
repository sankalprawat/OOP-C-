#include <iostream>

using namespace std;

int main()
{
    int Array[3][3];
    cout << "Enter the value of 2d Array :\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Array[i][j];
        }
    }

    cout << "The given values in Matrix form are :\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Array[i][j]<<"\t";
        }
        cout << "\n";
    }
    return 0;
}