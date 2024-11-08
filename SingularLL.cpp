#include <iostream>

class SingularLinkedLists {
public:
    // Creating a node which contains data and address to the next node
    struct Node {
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
        // Creation of head or first node
        Node* head;

        LinkedList() {
            head = nullptr;
        }

        // Function for inserting a new node at the end of the list
        void insert(int data) {
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

        // Function for deleting a node with a specific value
        void deleteNode(int key) {
            Node* temp = head;
            Node* prev = nullptr;

            // If the head node itself holds the key to be deleted
            if (temp != nullptr && temp->data == key) {
                head = temp->next; // Changed head
                delete temp;
                return;
            }

            // Search for the key to be deleted, keep track of the previous node as we need to change temp->next
            while (temp != nullptr && temp->data != key) {
                prev = temp;
                temp = temp->next;
            }

            // If the key was not present in the linked list
            if (temp == nullptr) return;

            // Unlink the node from the linked list
            prev->next = temp->next;
            delete temp;
        }

        // Method for searching a node with a specific value or key
        bool search(int key) {
            Node* temp = head;
            while (temp != nullptr) {
                if (temp->data == key) {
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }

        // Function for displaying the linked list
        void display() {
            Node* temp = head;
            while (temp != nullptr) {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }
    };
};

// Main function
int main() {
    SingularLinkedLists::LinkedList list1;
    list1.insert(10);
    list1.insert(15);
    list1.insert(25);
    list1.insert(29);
    list1.insert(6);
    list1.insert(22);

    std::cout << "Linked List: ";
    list1.display();

    list1.deleteNode(6);
    std::cout << "After deleting 6: ";
    list1.display();

    bool result = list1.search(29);
    if (result) {
        std::cout << "Number 29 is available in the list." << std::endl;
    } else {
        std::cout << "Number 29 is not present in the list." << std::endl;
    }

    return 0;
}