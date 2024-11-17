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

    void insertionAtBeginning () {
        newNode = new Node();  // Creating new node dynamicaly
        cout << "Enter the data you want to insert at the beginning of the list: " ;
        cin >> newNode->data ;
        newNode->next = head ;
        head = newNode ;
    }

    void insertionAtEnd () {
        newNode = new Node ();
        cout << "Enter the data you want to add a the end: " ;
        cin >> newNode->data ;
        newNode->next = nullptr;
        temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;                 // Traversing temp pointer till the end of the list
        }
        temp->next = newNode ;                 // Connecting last and second last node
        
    }

    int countItemsinLinkedList () {
        int count = 0;
        temp = head;
        while (temp != nullptr) {
            count ++ ;
            temp = temp->next;
        }
        return count ;
    }

    void insertionAtGivenPos () {
        int pos;
        cout << "Enter the position where you want to insert node: " ;
        cin >> pos ;
        int count = countItemsinLinkedList();
        if (pos > count) {
            cout << "Error: Invalid Postion!" << endl; 
        } else {
            int i = 1; 
            temp = head ;
            while (i < pos)
            {
                temp = temp->next ;
                i++ ;
            }
            newNode = new Node();
            cout << "Enter the data: " ;
            cin >> newNode->data ;
            newNode->next = temp->next ;
            temp->next = newNode ;
        }
    }

    void delFromBeg () {
        if (head == nullptr) { // Check if the list is empty
        cout << "List is already empty." << endl;
        return;
    }
    temp = head ;
        if (head->next == nullptr) {  // if list only has one Node left
            head = nullptr ;
            delete temp;
        } else {
            head = head->next ;
            delete temp ;
        }
    }

    void delFromEnd () {
        Node *prevNode = nullptr; 
        temp = head ;
        while (temp->next!=nullptr) {
            prevNode = temp ;
            temp = temp->next ;
        }
        if (temp == head) {
            head = nullptr ;
        } else {
            prevNode->next = nullptr ;
        }
        delete temp; 
    }

    void delFromPos () {
        Node * nextNode; 
        int pos, i = 1 ;
        cout << "Enter the position where you want to delete: " ;
        cin >> pos; 
        if (pos == 1) {
            delFromBeg();
        } else if (pos > countItemsinLinkedList()) {
            cout << "Error: Invalid position!" << endl; 
        } else if (head == nullptr) {
            cout << "List is already empty!" << endl ;
        } else {
            while (i < pos - 1)
            {
                temp = temp->next ;
                i++ ;
            }
            nextNode = temp->next ;
            temp->next = nextNode -> next ;
            delete nextNode ;
        }
    }

    void reverseList() {
        Node *prevNode, *currentNode, *nextNode ;
        prevNode = nullptr ;
        currentNode = nextNode = head ;
        while (nextNode != nullptr) {
            nextNode = nextNode->next ;
            currentNode->next = prevNode ;
            prevNode = currentNode ;
            currentNode = nextNode ;
        }
        head = prevNode ;
    }
};

int main() {
    linkedList linkedl;
    linkedl.createNode();
    linkedl.displayLL();
    linkedl.insertionAtBeginning();
    linkedl.displayLL();
    linkedl.insertionAtEnd();
    linkedl.displayLL();
    linkedl.insertionAtGivenPos();
    linkedl.displayLL();
    linkedl.delFromBeg();
    linkedl.displayLL();
    linkedl.delFromEnd();
    linkedl.displayLL();
    linkedl.reverseList();
    linkedl.displayLL();
    return 0;
}
