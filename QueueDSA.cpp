#include <iostream>
using namespace std;

#define N 5
int queue[N] ;
int front = -1 ;
int rear = -1 ;

void enQueue(int data) {
    if (rear == N-1) {
        cout << "Queue Overflow !" << endl ;  // if the Q is full
    } else if (front == -1 && rear == -1) {   // if the Q is empty
        front = rear = 0 ;
        queue[rear] = data ;
    } else {                                    // if the Q is in between
        rear++ ;
        queue[rear] = data ;
    }
}

void deQueue() {
    if (front == -1 && rear == -1) {            // if the Q is empty
        cout << "Queue is empty! " << endl ; 
    } else if (front == rear) {            // Only 1 element left, if front == rear
        front = rear = -1 ;                // to show that the Q is empty again after deQ last data
    } else {
        cout << queue[front] << " removed. " << endl ;  
        front ++ ;
    }
}

void display () {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty! " << endl ;
    } else {
        cout << "Elements: " << endl; 
        for (int i = front; i <= rear; i++) {
            cout << queue[i]  << endl;
        }
    }
    cout << endl ;
}

void peek () {
     if (front == -1 && rear == -1) {
        cout << "Queue is empty! " << endl ;
    } else {
        cout << "First element: " << queue[front] << endl; 
    }
}

int main () {
    enQueue(10) ;
    enQueue(20) ;
    enQueue(12) ;
    enQueue(40) ;
    enQueue(14) ;

    peek();
    display();

    deQueue();
    peek();
    deQueue();

    display();

    peek();
    
}