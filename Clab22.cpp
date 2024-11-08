// Find the Maximum Value: Write a program to find the maximum value in an array of integers.
#include <iostream>

using namespace std;

int findMax(int arr[], int n)
{
    int max_value = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    return max_value;
}

int main()
{
    int arr[] = {3, 10, 4, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]); 

    int max_element = findMax(arr, n);

    cout << "The maximum value in the array is: " << max_element << endl;

    return 0;
}
