#include <iostream>
using namespace std;

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void enQueue(int data) {
    if (rear == MAX - 1) {
        cout << "Error: The Queue is full!" << endl;
    } else {
        queue[++rear] = data;
        cout << data << " added to the queue." << endl;
    }
}

void deQueue() {
    if (front == rear) {  
        cout << "Error: Queue is empty! Cannot deQueue!" << endl;
    } else {
        cout << queue[front] << " is removed from the queue." << endl ;
        front ++;
        if (front == rear) {
            front = rear - 1;
        }
    }
}

void display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);  

    deQueue();
    deQueue();

    display();  
    return 0;
}
