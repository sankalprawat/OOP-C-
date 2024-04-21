#include <iostream>

using namespace std ;

int main() {
    int size ;
    cout << "Enter the size of Array : " ;
    cin >> size ;

    int* array = new int[size](); 

    cout << "Enter the data of the array : " ;
    for(int i = 0 ; i < size ; i++) {
        cin >> array[i] ;
    }

    cout << "Here's your entered Array data : \n" ;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl ;
    }

    delete[] array ;
    

    return 0 ;
}