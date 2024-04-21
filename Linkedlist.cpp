#include <iostream>

using namespace std ;

class Node {
    public : 
     
     int data ;
     Node* next ;

     public :
       Node(int data1 , Node* next1){
        data = data1 ;
        next = next1 ;
       }

} ;

int main() {
    int arr[] = {1, 2, 4, 6, 7} ;
    Node * y = new Node(arr[2] , nullptr);
    cout << y->next ;

    }