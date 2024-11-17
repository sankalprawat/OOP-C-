// WAP to implement stack DS by using LL and peform various stack operations such as: 
//Push, Pop, Top and Size.

#include <iostream> 
using namespace std ;

struct Node {
    int data;
    Node *next ;
};

class Stack {
    private:


    Node *top = nullptr, *temp = nullptr ;

    public:


    void push (int n) {
        Node * newNode = new Node () ;
        newNode->data = n ;
        newNode->next = top ;
        top = newNode ;
    }

    void pop () {
        if (top == nullptr) {
            cout << "The list is empty!" << endl ;
        } else {
            temp = top ;
            cout << "The popped elemet is: " << top->data << endl ;
            top = top->next ;
            delete temp ;
        }
    }

    void display () {
        if (top == nullptr) {
            cout << "The stack is empty!" << endl ;
        } else {
            temp = top ;
            while (temp != nullptr)
            {
                cout << temp->data << " -> " ;
                temp = temp->next ;
            }
            cout << "nullptr" << endl ;
        }
    }

    void peek () {
        if (top == nullptr) {
            cout << "Stack is empty! " << endl; 
        } else {
            cout << "Top element: " << top->data << endl ;
        }
    }

};

int main () {
    Stack stack ;
    stack.push(10) ;
    stack.push(20) ;
    stack.push(30) ;
    stack.display();
    stack.peek();
    stack.pop();
    stack.peek();
    stack.display();
}

