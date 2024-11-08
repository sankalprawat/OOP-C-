// 2.Average of Numbers: Create a C++ program that calculates the average value of an array of numbers.
#include <iostream>
using namespace std;

int avgArr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int avg = sum / size;
    return avg;
}

int main()
{
    int a[] = {4, 8, 5, 3};
    int size = sizeof(a) / sizeof(a[0]);

    int result = avgArr(a, size);
    cout << result;

    return 0;
}