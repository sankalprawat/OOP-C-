#include <iostream>
using namespace std;

#define N 5
int stack [N] ;
int top = -1 ;

void push (int data) {
    if (top == N-1) {
        cout << "Error: Stack Overflow!" << endl ;
    } else {
        top ++ ;
        stack[top] = data ;
    }
}

void pop () {
    if (top == -1) {
        cout << "Error: Stack Underflow!" << endl ;
    } else {
        cout <<"Popped item is: " << stack[top] << endl ;
        top-- ;
    }
}

void peek () {
    if (top == -1) {
        cout << "Error: Stack Underflow!" << endl ;
    } else {
        cout << "Top element of the stack is: " << stack[top] << endl ;
    }
}

void display () {
    if (top == -1) {
        cout << "Error: Stack Underflow!" << endl ;
    } else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main () {
    push(10);
    push(21);
    push(40);
    push(25);
    push(66);
    push(74);

    display();
    peek();

    pop();
    peek();
    pop();
    peek();

    display();

    return 0;
}