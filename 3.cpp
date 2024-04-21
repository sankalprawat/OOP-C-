/*Tower of Hanoi problem*/ 

#include<iostream>

using namespace std ;

void TOH(int d, char tow1 , char tow2, char tow3){
    if(d==1){
        cout << "\nShift the top disk from tower " << tow1 << " to tower " << tow2 ;
        return;
    }

    TOH(d-1, tow1 , tow3 , tow2);
    cout << "\nShift top disk from tower " << tow1 << " to tower " << tow2 ;

    TOH(d-1, tow3, tow2, tow1) ;
}

int main () {
    int disk ;

    cout << "Enter the number of disk : " ;
    cin >> disk ;

    if(disk < 1) {
        cout << "There are no disk to move or number is less than 1 ." << endl ;
    }
    else {
        cout << "There are " << disk << " disk in tower 1." << endl ;
    }

    TOH(disk , '1', '2', '3');

    cout << disk << " are shifted from tower 1 to tower 2." ;

    return 0 ;
}

