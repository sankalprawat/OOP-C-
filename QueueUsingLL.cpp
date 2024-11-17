#include <iostream>
using namespace std ;

struct Node
{
    int data ;
    Node* next ;
};

class Queue {
    private: 
    Node *front = nullptr ;
    Node *rear = nullptr ;

    public:
    void enQueue (int n) {
        Node *newNode = new Node() ;
        newNode->data = n; 
        newNode->next = nullptr ;
        if (front == nullptr && rear == nullptr) {
            front = rear = newNode ;
        } else {
            rear->next = newNode; 
            rear = newNode ;
        }
    }

    void deQueue () {
        Node *temp ;
        if (front == nullptr && rear == nullptr) {
            cout << "Queue is empty!" << endl; 
        } else {
            temp = front ;
            cout << front->data << " is dequeued." << endl ;
            front = front->next ;
            delete temp; 
        }
    }

    void display () {
        Node *temp = nullptr ;
        if (front == nullptr && rear == nullptr) {
            cout << "Queue is empty!" << endl; 
        } else {
            temp = front ;
            while (temp != nullptr) {
                cout << temp->data << " -> " ;
                temp = temp->next ;
            }
            cout << "nullptr" << endl; 
        }
    }

    void peek () {
        if (front == nullptr && rear == nullptr) {
            cout << "Queue is empty!" << endl; 
        } else {
            cout << "Front element is: " << front->data << endl ;
        }
    }
};

int main () {
    Queue q ;
    q.enQueue(5) ;
    q.enQueue(0) ;
    q.enQueue(-3) ;
    q.display();
    q.deQueue();
    q.peek();
}
