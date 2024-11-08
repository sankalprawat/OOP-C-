// Implement a priority queue using list or array and perform the following operation
// Insert, Extract, Min, Max
#include <iostream>
using namespace std;

class SimpleQueue {
private:
    int arr[100]; 
    int front;     
    int rear;     
    int size;      

public:
    SimpleQueue() {
        front = 0;
        rear = -1;
        size = 0;
    }

    void insert(int value) {
        if (size < 100) { 
            rear++;
            arr[rear] = value;
            size++;
        } else {
            cout << "Queue overflow!" << endl;
        }
    }

    int extract() {
        if (size == 0) {
            cout << "Queue underflow!" << endl;
            return -1; 
        }
        int value = arr[front];
        for (int i = 0; i < rear; i++) {
            arr[i] = arr[i + 1];
        }
        rear--;
        size--;
        return value;
    }

    int max() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
        int maxValue = arr[0];
        for (int i = 1; i <= rear; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }

    int min() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
        int minValue = arr[0];
        for (int i = 1; i <= rear; i++) {
            if (arr[i] < minValue) {
                minValue = arr[i];
            }
        }
        return minValue;
    }

    int peek() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1; 
        }
        return arr[front];
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
        } else {
            for (int i = 0; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    SimpleQueue queue;

    queue.insert(10);
    queue.insert(30);
    queue.insert(20);
    queue.insert(5);

    cout << "Queue elements: ";
    queue.display();

    cout << "Max element: " << queue.max() << endl;
    cout << "Min element: " << queue.min() << endl;

    cout << "Extracted element: " << queue.extract() << endl;
    cout << "Queue after extracting an element: ";
    queue.display();

    cout << "Peek element: " << queue.peek() << endl;

    return 0;
}

