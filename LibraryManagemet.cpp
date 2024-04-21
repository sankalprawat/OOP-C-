#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string book_name;
    string author_name;
    float cost;
    int no_of_pages;

public:
    Book() : cost(0), no_of_pages(0) {}

    void addBookDetails() {
        cin.ignore();
        cout << "Enter the book name: ";
        getline(cin, book_name);
        cout << "Enter the author name: ";
        getline(cin, author_name);
        cout << "Enter the number of pages: ";
        cin >> no_of_pages;
        cout << "Enter the cost of the book: ";
        cin >> cost;
    }

    void displayBookDetails() {
        cout << "The name of the book is: " << book_name << "\n";
        cout << "The name of the author is: " << author_name << "\n";
        cout << "The number of pages are: " << no_of_pages << "\n";
        cout << "The cost of the book is: " << cost << "\n\n";
    }

    static void displayTotalBooks(int count) {
        cout << "\nTotal number of books in the library are: " << count << "\n\n";
    }
};

int main() {
    const int MAX_BOOKS = 100; 
    Book library[MAX_BOOKS];
    int bookCount = 0;
    int choice = 0;

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
                    library[bookCount].addBookDetails();
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
                        library[i].displayBookDetails();
                    }
                }
                break;
            }
            case 3: {
                Book::displayTotalBooks(bookCount);
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
