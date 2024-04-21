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

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // create temp arrays
    int L[n1], R[n2];

    // copy data to temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // merge the temp arrays back into arr[left..right]
    int i = 0; // index of first element in left array
    int j = 0; // index of first element in right array
    int k = left; // index of current element in arr

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right) {
        // find the mid point
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // merge the sorted halves
        merge(arr, left, mid, right);
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
