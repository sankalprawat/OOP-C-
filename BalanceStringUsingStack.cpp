#include <iostream>
using namespace std;

#define N 100 // Define a larger stack size for longer strings
char stack[N];
int top = -1;

// Stack operations
void push(char data) {
    if (top == N - 1) {
        cout << "Error: Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    if (top == -1) {
        cout << "Error: Stack Underflow!" << endl;
    } else {
        top--;
    }
}

bool isEmpty() {
    return top == -1;
}

char peek() {
    if (top == -1) {
        cout << "Error: Stack Underflow!" << endl;
        return -1;
    } else {
        return stack[top];
    }
}

// Function to check if the string is balanced
bool isBalanced(string s) {
    for (char ch : s) {
        if (ch == '{') {
            push(ch); // Push opening braces onto the stack
        } else if (ch == '}') {
            if (isEmpty()) {
                return false; // Unmatched closing brace
            }
            pop(); // Match found, pop the stack
        }
    }

    return isEmpty(); // If stack is empty, braces are balanced
}

int main() {
    string s1 = "{}{{{}}}{}"; // Balanced
    string s2 = "{{}}}}{{";   // Not Balanced

    cout << "String: " << s1 << " -> " << (isBalanced(s1) ? "Balanced" : "Not Balanced") << endl;
    cout << "String: " << s2 << " -> " << (isBalanced(s2) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}
