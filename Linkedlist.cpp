#include <iostream>
using namespace std;

// Node structure to define each node in the linked list
struct Node {
    int data;      // Data part of the node
    Node* next;    // Pointer to the next node
};

// Class to implement the linked list and its operations
class linkedList {
  private:
    Node* head = nullptr;  // Head pointer to point to the first node
    Node* newNode = nullptr; // Temporary pointer to create a new node
    Node* temp = nullptr;   // Temporary pointer for traversal
    int choice = 1; // Initialize choice to 1 to start the loop for node creation

  public:
    // Function to create a linked list by adding nodes dynamically
    void createNode() {
        while (choice) {
            newNode = new Node(); // Create a new node dynamically
            cout << "Enter the data: ";
            cin >> newNode->data;  // Take input for the node's data
            newNode->next = nullptr; // Initialize the next pointer to nullptr

            if (head == nullptr) {
                // If the list is empty, initialize head and temp
                head = temp = newNode;
            } else {
                // Link the new node to the current list
                temp->next = newNode;
                temp = newNode;   // Move temp to the new node
            }

            cout << "Press 1 to add another node or press 0 to exit: ";
            cin >> choice; // Get the user's choice to continue or stop
        }
    }

    // Function to display the linked list
    void displayLL() {
        temp = head; // Start from the head
        while (temp != nullptr) {
            cout << temp->data << " -> "; // Print the data of each node
            temp = temp->next; // Move to the next node
        }
        cout << "nullptr" << endl; // Mark the end of the list
    }

    // Function to insert a node at the beginning of the list
    void insertionAtBeginning() {
        newNode = new Node(); // Create a new node dynamically
        cout << "Enter the data you want to insert at the beginning of the list: ";
        cin >> newNode->data;
        newNode->next = head; // Point the new node to the current head
        head = newNode;       // Update head to the new node
    }

    // Function to insert a node at the end of the list
    void insertionAtEnd() {
        newNode = new Node(); // Create a new node dynamically
        cout << "Enter the data you want to add at the end: ";
        cin >> newNode->data;
        newNode->next = nullptr; // The new node will point to null
        temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // Traverse to the last node
        }
        temp->next = newNode; // Link the last node to the new node
    }

    // Function to count the number of nodes in the linked list
    int countItemsinLinkedList() {
        int count = 0;
        temp = head; // Start from the head
        while (temp != nullptr) {
            count++;         // Increment count for each node
            temp = temp->next; // Move to the next node
        }
        return count; // Return the total count
    }

    // Function to insert a node at a given position
    void insertionAtGivenPos() {
        int pos;
        cout << "Enter the position where you want to insert a node: ";
        cin >> pos;
        int count = countItemsinLinkedList();
        if (pos > count) {
            cout << "Error: Invalid Position!" << endl;
        } else {
            int i = 1;
            temp = head;
            while (i < pos) {
                temp = temp->next; // Traverse to the desired position
                i++;
            }
            newNode = new Node(); // Create a new node dynamically
            cout << "Enter the data: ";
            cin >> newNode->data;
            newNode->next = temp->next; // Link the new node to the next node
            temp->next = newNode;       // Link the current node to the new node
        }
    }

    // Function to delete a node from the beginning of the list
    void delFromBeg() {
        if (head == nullptr) { // Check if the list is empty
            cout << "List is already empty." << endl;
            return;
        }
        temp = head;
        if (head->next == nullptr) { // If the list has only one node
            head = nullptr;
            delete temp; // Delete the only node
        } else {
            head = head->next; // Move the head to the next node
            delete temp;       // Delete the original head node
        }
    }

    // Function to delete a node from the end of the list
    void delFromEnd() {
        Node* prevNode = nullptr;
        temp = head;
        while (temp->next != nullptr) {
            prevNode = temp;  // Track the previous node
            temp = temp->next; // Move to the next node
        }
        if (temp == head) {   // If the list has only one node
            head = nullptr;
        } else {
            prevNode->next = nullptr; // Disconnect the last node
        }
        delete temp; // Delete the last node
    }

    // Function to delete a node at a given position
    void delFromPos() {
        Node* nextNode = nullptr;
        int pos, i = 1;
        cout << "Enter the position where you want to delete: ";
        cin >> pos;
        if (pos == 1) {
            delFromBeg(); // Delete from beginning if position is 1
        } else if (pos > countItemsinLinkedList()) {
            cout << "Error: Invalid position!" << endl;
        } else if (head == nullptr) {
            cout << "List is already empty!" << endl;
        } else {
            temp = head;
            while (i < pos - 1) {
                temp = temp->next;
                i++;
            }
            nextNode = temp->next; // Store the node to be deleted
            temp->next = nextNode->next; // Link the current node to the next of the deleted node
            delete nextNode; // Delete the node
        }
    }

    // Function to reverse the linked list
    void reverseList() {
        Node *prevNode, *currentNode, *nextNode;
        prevNode = nullptr;
        currentNode = nextNode = head;
        while (nextNode != nullptr) {
            nextNode = nextNode->next; // Store the next node
            currentNode->next = prevNode; // Reverse the link
            prevNode = currentNode; // Move prevNode to the current node
            currentNode = nextNode; // Move to the next node
        }
        head = prevNode; // Update head to the new first node
    }
};

// Main function to test the linked list operations
int main() {
    linkedList linkedl; // Create a linked list object
    linkedl.createNode(); // Create nodes
    linkedl.displayLL();  // Display the list
    linkedl.insertionAtBeginning(); // Insert at the beginning
    linkedl.displayLL();
    linkedl.insertionAtEnd(); // Insert at the end
    linkedl.displayLL();
    linkedl.insertionAtGivenPos(); // Insert at a specific position
    linkedl.displayLL();
    linkedl.delFromBeg(); // Delete from the beginning
    linkedl.displayLL();
    linkedl.delFromPos(); // Delete from the end
    linkedl.displayLL();
    linkedl.reverseList(); // Reverse the linked list
    linkedl.displayLL();
    return 0;
}
