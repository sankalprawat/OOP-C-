#include<iostream>
using namespace std ;
struct Node {
    int data ;
    Node* left, *right ;
};

Node* create () {
    int data ;
    Node *newNode = new Node() ;
    cout << "Enter the data (Press -1 for no node creation): " ;
    cin >> data ;
    if (data == -1) 
        return nullptr ;

    newNode->data = data ;
    cout << "Enter left child of " << data << " " ;
    newNode->left = create(); 

    cout << "Enter right child of " << data << "  " ;
    newNode->right = create() ;

    return newNode ;
    
}

void preOrder (Node * root) {
    if (root == nullptr) 
        return ;

    cout << root->data << " " ;
    preOrder(root->left) ;
    preOrder(root->right);
}

void inOrder(Node *root) {
    if (root == nullptr)
        return;

    inOrder(root->left);        
    cout << root->data << " ";  
    inOrder(root->right);       
}

void postOrder(Node *root) {
    if (root == nullptr)
        return;

    postOrder(root->left);   
    postOrder(root->right);       
    cout << root->data << " "; 
} 

int main () {
    Node * root; 
    root = create() ;
    cout << "Pre-Order: " ;
    preOrder(root);
    cout << endl ;
    cout << "In-Order: " ;
    inOrder(root) ;
    cout << endl ;
    cout << "Post-Order: " ;
    postOrder(root); 
    cout << endl; 

    return 0; 
}