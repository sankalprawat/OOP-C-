#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int data)
{
    int l = 0, r = n - 1;
    int mid = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == data)
        {
            return mid;
        }

        else if (data < a[mid])
            r = mid - 1;

        else
        {
            l = mid + 1;
        }
    }

    return -1;
}

bool isArraySortedRecursive(int A[], int n)
{
    if (n <= 1)
    {
        return true;
    }

    if (A[n - 1] < A[n - 2])
    {
        return false;
    }

    return isArraySortedRecursive(A, n - 1);
}

void BubbleSort(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int Arr[10];
    int data;
    cout << "Enter the elements of Array :";
    for (int i = 0; i < 10; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter the number you want to find Array :";
    cin >> data;
    if (isArraySortedRecursive(Arr, 10) == true)
    {
        int result = binarySearch(Arr, 10, data);
        if (result != -1)
        {
            cout << "The given number is at index " << result << " in the Array.";
        }
        else
        {
            cout << "The given number is not present in the Array.";
        }
    }

    else
    {
        cout << "The Array you have given is not sorted .\n";
        cout << "Sorting the Array now..... Please wait ! .\n";
        BubbleSort(Arr, 10);
        cout << "The Array has been successfully sorted .\n";
        int result = binarySearch(Arr, 10, data);
        if (result != -1)
        {
            cout << "The given number is at index " << result << " in the sorted Array.";
        }
        else
        {
            cout << "The given number is not present in the Array.";
        }
    }

    return 0;
}
