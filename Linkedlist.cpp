#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class linkedList {
  private:
    Node* head = nullptr;
    Node* newNode = nullptr;
    Node* temp = nullptr;
    int choice = 1; // Initialize choice to 1 to start the loop

  public:
    void createNode() {
        while (choice) {
            newNode = new Node(); // Create a new node dynamically
            cout << "Enter the data: ";
            cin >> newNode->data;
            newNode->next = nullptr;

            if (head == nullptr) {
                head = temp = newNode; // Initialize head and temp
            } else {
                temp->next = newNode; // Link the new node
                temp = newNode;       // Move temp to the new node
            }

            cout << "Press 1 to add another node or press 0 to exit: ";
            cin >> choice; // Get the user's choice
        }
    }

    void displayLL() {
        temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl; // Mark the end of the list
    }
};

int main() {
    linkedList linkedl;
    linkedl.createNode();
    linkedl.displayLL();
    return 0;
}
