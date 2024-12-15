#include <iostream>
using namespace std ;

struct Node {
    int data ;
    Node* next ;
};

class LinkedList {
    private: 
    Node* newNode = nullptr ;
    Node* head  = nullptr ;
    Node* temp = nullptr ;
    int choice = 1 ;
    
    public: 
    void createNode () {
        while (choice) {
            newNode = new Node ();
            cout << "Enter data: " ;
            cin >> newNode-> data; 
            newNode -> next = nullptr; 
            
            if (head == nullptr) {
                head = temp = newNode ;
            } else {
                temp -> next = newNode ;
                temp = newNode ;
            }
            cout << "Press 1 to continue or 0 to exit: " ;
            cin >> choice ;
        }
    }
    
    void display () {
        if (head == nullptr) {
            cout << "List is empty! " << endl; 
        } else {
            temp = head;
            while (temp != nullptr) {
                cout << temp -> data << " ->" << " " ;
                temp = temp -> next ;
            }
            cout << "nullptr" << endl ;
        }
    }
    
    void insertionAtBeg (int data) {
        newNode = new Node() ;
        newNode -> data = data ;
        newNode -> next = head ;
        head = newNode ;
    }
    
    void insertionAtEnd (int data) {
        newNode = new Node () ;
        newNode -> data = data ;
        newNode -> next = nullptr ;
        temp = head ;
        while (temp-> next != nullptr) {
            temp = temp -> next ;
        }
        temp -> next = newNode ;
    }
    
    int count() {
        int count = 0 ;
        temp = head ;
        while (temp != nullptr) {
            count++ ;
            temp = temp->next ;
        }
        return count ; 
    }
    
    void insertAtPos () {
        int pos; 
        cout << "Enter the position where you want to insert: " ;
        cin >> pos; 
        int count = LinkedList::count() ;
        if (pos > count) {
            cout << "Enter a valid number!" << endl ;
        } else {
            int i = 1 ;
            temp = head; 
            while (i < pos){
                temp = temp -> next ;
                i++ ;
        }
            newNode = new Node () ;
            newNode -> next = temp -> next ;
            temp -> next = newNode ;
        }
    }

    void deleteFromEnd () {
        if (head == nullptr) {
            cout << "List is empty! " ;
            return ;
        }
        Node *prevNode = nullptr ;
        temp = head;
        if (head->next == nullptr) { 
            head = nullptr;
            delete temp;
        }
        while (temp->next != nullptr)
        {   
            prevNode = temp ;
            temp = temp->next ;
        }
        
        prevNode -> next = nullptr; 
        delete temp ;
        
    }
    
    void deleteFormBeg () {
        if (head == nullptr) {
            cout << "List is empty!" << endl ;
        } 
        temp = head ;
        if (head -> next == nullptr) {
            head = nullptr ;
            delete temp ;
        } else {
            head = head -> next ;
            delete temp ;
        }
    }
    
    void deleteFromPos () {
        int pos, i = 1 ;
        cout << "Enter the position where you want to delete from: " ;
        cin >> pos ;
        int count = LinkedList::count() ;
        if (pos > count) {
            cout << "Please enter a valid number! " << endl;
        } else if (pos == 1) {
            deleteFormBeg () ;
        } else if (head == nullptr) {
            cout << "List is empty! " << endl ;
        } else {
            Node *nextNode = nullptr ;
            temp = head ;
            while (i < pos - 1) {
                temp = temp -> next ;
                i++ ;
            }
            nextNode = temp -> next ;
            temp -> next = nextNode -> next ;
            delete nextNode ;
        }
        
    }
    
};

int main () {
    LinkedList list1 ;
    list1.createNode() ;
    list1.display(); 
    return 0 ;
}