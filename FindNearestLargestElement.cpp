#include <iostream>
using namespace std;

#define N 7  // Define array size

// Define stack to hold elements
int stack[N];
int top = -1;

// Function to push data to stack
void push(int data) {
    if (top == N - 1) {
        cout << "Error: Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

// Function to pop data from stack
void pop() {
    if (top == -1) {
        cout << "Error: Stack Underflow!" << endl;
    } else {
        top--;
    }
}

// Function to get the top element of the stack
int peek() {
    if (top == -1) {
        return -1;  // Stack is empty
    }
    return stack[top];
}

// Function to find nearest greater element for each element
void findNearestGreater(int arr[], int size) {
    int result[size];  // To store the result for each element

    // Traverse the array from right to left
    for (int i = size - 1; i >= 0; i--) {
        // Pop all elements from the stack that are less than or equal to current element
        while (top != -1 && peek() <= arr[i]) {
            pop();
        }

        // If the stack is empty, no greater element is found
        if (top == -1) {
            result[i] = -1;
        } else {
            result[i] = peek();
        }

        // Push the current element to the stack
        push(arr[i]);
    }

    // Display the result
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {6, 4, 9, 3, 8, 12, 5};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    findNearestGreater(arr, size);  // Call the function to find nearest greater elements

    return 0;
}
