#include <iostream>
using namespace std;

class Stack {
    private:
        static const int MAX = 10;
        int arr[MAX];
        int top;
    public:
        Stack() {
            top = -1;
        }

        void push(int data) {
            if (top >= MAX - 1) {
                cout << "Error: Stack overflow!" << endl;
            } else {
                arr[++top] = data;
            }
        }

        void pop() {
            if (top == -1) {
                cout << "Error: Stack Underflow!" << endl;
            } else {
                --top;
            }
        }

        void peek() {
            if (top >= 0) {
                cout << arr[top] << endl;
            } else {
                cout << "Stack is empty" << endl;
            }
        }

        bool isEmpty() {
            return top == -1;
        }

        void display() {
            if (top == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Stack elements are:" << endl;
                for (int i = top; i >= 0; --i) {
                    cout << arr[i] << endl;
                }
            }
        }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);

    // Display the stack
    stack.display();

    stack.peek();  // Peek at the top element

    stack.pop();   // Pop the top element

    // Display the stack again
    stack.display();

    stack.peek();  // Peek at the new top element

    return 0;
}
