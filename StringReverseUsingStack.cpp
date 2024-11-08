#include <iostream>
using namespace std;

class Stack {
    private:
        static const int MAX = 100;  
        char arr[MAX];               
        int top;
    public:
        Stack() {
            top = -1; 
        }

        bool isFull() {
            return top >= MAX - 1;
        }

        bool isEmpty() {
            return top == -1;
        }

        void push(char data) {
            if (isFull()) {
                cout << "Error: Stack overflow!" << endl;
            } else {
                arr[++top] = data;
            }
        }

        char pop() {
            if (isEmpty()) {
                cout << "Error: Stack Underflow!" << endl;
                return '\0';  
            } else {
                return arr[top--];
            }
        }

};

int main() {
    Stack stack;
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, 100);

    for (int i = 0; input[i] != '\0'; i++) {
        stack.push(input[i]);
    }

    cout << "Reversed string: ";


    while (!stack.isEmpty()) {
        cout << stack.pop();
    }

    cout << endl;

    return 0;
}
