// Wap in C++ to merge two unsorted arrays.(important)
#include <iostream>
using namespace std ;

template <class T> 
void mergeArray(T arr1[], int size1, T arr2[], int size2) {
    int size3 = size1 + size2 ;
    T resultArr[size3] ;

    for (int i = 0 ; i < size1 ; i ++) {
        resultArr[i] = arr1[i] ;
    }

    for (int i = 0; i < size2; i++)
    {
        resultArr[size1 + i] = arr2[i] ;
    }

    cout << "Merged array is : " ;
    for(int i = 0 ; i < size3 ; i++) {
        cout<< resultArr[i] << " " ;
    }
}

int main () {
    int array1[] = {16, 43, 23, 62, 32} ;
    int array2[] = {34, 77, 29, 27} ;

    int size1 = sizeof(array1) / sizeof(array1[0]) ;
    int size2 = sizeof(array2) / sizeof(array2[0]) ;

    mergeArray(array1, size1, array2, size2) ;
}