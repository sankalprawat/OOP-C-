#include<iostream>
class Node {
public:
    int data;
    Node* next;

    // Constructor for the node
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Class for the inner workings and functions of the linked list
class LinkedList {
public: 
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Function for inserting a new node at the end of the list
    void insertData(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Method to delete selected node from the linked list
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;

        // If the head node itself holds the key to be deleted
        if (temp != nullptr && temp->data == key) {
            head = temp->next; // Change head
            delete temp;       // Free memory
            return;
        }

        // Search for the key to be deleted, keep track of the previous node
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If the key was not present in the linked list
        if (temp == nullptr) return;

        // Unlink the node from the linked list
        prev->next = temp->next;
        delete temp; // Free memory
    }

    // Method to print the linked list
    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.insertData(10);
    list.insertData(20);
    list.insertData(30);
    list.insertData(40);
    list.printList();  

    list.deleteNode(20);
    list.printList();  
    return 0;
}