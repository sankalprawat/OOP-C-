// Negate the Numbers: Implement a program that changes all positive numbers in an array to negative numbers.
#include <iostream>
using namespace std;

void negateArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = -arr[i];
        }
    }
}
int main()
{
    int arr[] = {29, 27, 3, 15, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    negateArray(arr, size);
    cout << "Updated array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}