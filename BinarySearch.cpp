#include <iostream>

using namespace std;


int binarySearch(int a[], int n, int data)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = l + r / 2;  
        if (a[mid] == data)
        {
            return mid;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int Arr[10];
    int data;

    cout << "Enter 10 sorted elements of the Array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> Arr[i]; 
    }

    cout << "Enter the number you want to find in the Array: ";
    cin >> data;

    int result = binarySearch(Arr, 10, data);

    if (result != -1)
    {
        cout << "The given number is at index " << result << " in the sorted Array." << endl;
    }
    else
    {
        cout << "The given number is not present in the Array." << endl;
    }

    return 0;
}
