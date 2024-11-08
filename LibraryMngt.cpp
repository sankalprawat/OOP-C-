#include <iostream>
#include <cstring>
using namespace std ;
#define MAX_BOOKS 100

class Library {
    string name, authorName ;
    int cost ;

    public: 
    Library() {
        cost = 0 ;
    }
    void getData() {
    cin.ignore() ;
     cout << "Enter the name of the book : " ;
     getline(cin, name) ;
     cout << "Enter the name of the author : " ;
     getline(cin, authorName);
     cout << "Enter the cost of the book : " ;
     cin >> cost ;
    }
    void putData() {
    cout << "Name of book : " << name << endl ;
    cout << "Author's name : " << authorName << endl ;
    cout << "Price : " << cost << endl ;
    }

    void displayAllBooks (int count) {
    cout << "Total number of books in library are : " << count << endl ;
    }
};

int main () {
    Library books[MAX_BOOKS];
    int bookCount = 0, choice;

    while (choice != 4) {
        cout << "\n\n1. Add Book details\n";
        cout << "2. Display the list of books and its details\n";
        cout << "3. Display the total no. of books in the library\n";
        cout << "4. Exit\n\n";
        cout << "Enter the number: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (bookCount < MAX_BOOKS) {
                    books[bookCount].putData();
                    bookCount++;
                } else {
                    cout << "\nLibrary is full. Cannot add more books.\n\n";
                }
                break;
            }
            case 2: {
                if (bookCount == 0) {
                    cout << "\nThere are no books stored!!\n\n";
                } else {
                    cout << "\nYou can view the list of books\n";
                    cout << "The list of books are:\n";
                    for (int i = 0; i < bookCount; ++i) {
                       books[i].putData();
                    }
                }
                break;
            }
            case 3: {
                books->displayAllBooks(bookCount);
                break;
            }
            case 4: {
                return 0;
            }
            default: {
                cout << "\nInvalid number entered\n\n";
            }
        }
    }

    return 0;

}