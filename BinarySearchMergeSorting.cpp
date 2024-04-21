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

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
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
        mergeSort(Arr, 0, 9);
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
