// Create a matrix and find the largest value in very row
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[3][3];
    cout << "Enter the value of the matrix: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    cout << "Largest value of all 3 rows: " << endl;
    int largestVal = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        largestVal = INT_MIN;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > largestVal)
            {
                largestVal = matrix[i][j];
            }
        }
        cout << largestVal << " " << endl;
    }
    return 0;
}