#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int choice = 1 ;
    node *head, *newNode, *temp;
    head = nullptr;
    while (choice)
    {
        newNode = new node();
        cout << "Enter data :\n";
        cin >> newNode->data;
        newNode->next = 0;

        if (head == 0)
        {
            head = temp = newNode;
        }

        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        cout << "Do you want to continue ?(0 / 1)" <<endl;
        cin >> choice;
    }
    temp = head;

    while (temp != 0)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return 0 ;
}