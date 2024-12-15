#include <iostream>
using namespace std;

// Node structure to define each node in the doubly linked list
struct Node {
    int data;      // Data part of the node
    Node* next;    // Pointer to the next node
    Node* prev;    // Pointer to the previous node (new addition)
};

// Class to implement the doubly linked list and its operations
class DoublyLinkedList {
  private:
    Node* head = nullptr;  // Head pointer to point to the first node
    Node* newNode = nullptr; // Temporary pointer to create a new node
    Node* temp = nullptr;   // Temporary pointer for traversal
    int choice = 1; // Initialize choice to 1 to start the loop for node creation

  public:
    // Function to create a doubly linked list by adding nodes dynamically
    void createNode() {
        while (choice) {
            newNode = new Node(); // Create a new node dynamically
            cout << "Enter the data: ";
            cin >> newNode->data;  // Take input for the node's data
            newNode->next = nullptr; // Initialize the next pointer to nullptr
            newNode->prev = nullptr; // Initialize the prev pointer to nullptr (new addition)

            if (head == nullptr) {
                // If the list is empty, initialize head and temp
                head = temp = newNode;
            } else {
                temp->next = newNode; // Link the new node to the current list
                newNode->prev = temp; // Link the new node's prev to temp (new addition)
                temp = newNode;       // Move temp to the new node
            }

            cout << "Press 1 to add another node or press 0 to exit: ";
            cin >> choice; // Get the user's choice to continue or stop
        }
    }

    // Function to display the doubly linked list
    void displayLL() {
        temp = head; // Start from the head
        while (temp != nullptr) {
            cout << temp->data << " <-> "; // Print the data of each node
            temp = temp->next;            // Move to the next node
        }
        cout << "nullptr" << endl; // Mark the end of the list
    }

    // Function to insert a node at the beginning of the list
    void insertionAtBeginning() {
        newNode = new Node(); // Create a new node dynamically
        cout << "Enter the data you want to insert at the beginning of the list: ";
        cin >> newNode->data;
        newNode->next = head; // Point the new node to the current head
        newNode->prev = nullptr; // The new node's prev is nullptr (new addition)

        if (head != nullptr) {
            head->prev = newNode; // Update the head's previous pointer to newNode (new addition)
        }
        head = newNode; // Update head to the new node
    }

    // Function to insert a node at the end of the list
    void insertionAtEnd() {
        newNode = new Node(); // Create a new node dynamically
        cout << "Enter the data you want to add at the end: ";
        cin >> newNode->data;
        newNode->next = nullptr; // The new node will point to null
        temp = head;

        if (temp == nullptr) { 
            // If the list is empty
            newNode->prev = nullptr;
            head = newNode;
        } else {
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the last node
            }
            temp->next = newNode; // Link the last node to the new node
            newNode->prev = temp; // Update the new node's prev pointer to temp (new addition)
        }
    }

    // Function to delete a node from the beginning of the list
    void delFromBeg() {
        if (head == nullptr) { // Check if the list is empty
            cout << "List is already empty." << endl;
            return;
        }
        temp = head;
        head = head->next; // Move the head to the next node

        if (head != nullptr) {
            head->prev = nullptr; // Update the new head's prev pointer to nullptr (new addition)
        }
        delete temp; // Delete the original head node
    }

    // Function to delete a node from the end of the list
    void delFromEnd() {
        if (head == nullptr) { // Check if the list is empty
            cout << "List is already empty." << endl;
            return;
        }

        temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // Traverse to the last node
        }

        if (temp->prev != nullptr) {
            temp->prev->next = nullptr; // Update the second last node's next pointer to nullptr
        } else {
            head = nullptr; // If only one node was present, make head nullptr
        }
        delete temp; // Delete the last node
    }

    // Function to reverse the doubly linked list
    void reverseList() {
        Node* current = head;
        Node* tempNode = nullptr;

        while (current != nullptr) {
            tempNode = current->prev;      // Swap prev and next pointers
            current->prev = current->next;
            current->next = tempNode;
            current = current->prev;      // Move to the next node (now prev due to reversal)
        }

        if (tempNode != nullptr) {
            head = tempNode->prev; // Update head to the new first node
        }
    }
};

// Main function to test the doubly linked list operations
int main() {
    DoublyLinkedList dll; // Create a doubly linked list object
    dll.createNode();     // Create nodes
    dll.displayLL();      // Display the list
    dll.insertionAtBeginning(); // Insert at the beginning
    dll.displayLL();
    dll.insertionAtEnd(); // Insert at the end
    dll.displayLL();
    dll.delFromBeg();     // Delete from the beginning
    dll.displayLL();
    dll.delFromEnd();     // Delete from the end
    dll.displayLL();
    dll.reverseList();    // Reverse the doubly linked list
    dll.displayLL();
    return 0;
}
