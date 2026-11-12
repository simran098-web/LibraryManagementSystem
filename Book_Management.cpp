
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Book Class
class Book {
public:
    int bookID;
    string title;
    string author;
    bool isIssued;
    string issuedTo;

    Book() {
        bookID = 0;
        isIssued = false;
        issuedTo = "";
    }
};

// Book Management Class
class BookManagement {
public:
    vector<Book> books;

    void addBook() {
        Book b;

        cout << "\nEnter Book ID: ";
        cin >> b.bookID;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, b.title);

        cout << "Enter Author Name: ";
        getline(cin, b.author);

        books.push_back(b);

        cout << "\nBook added successfully!\n";
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "\nNo books available!\n";
            return;
        }

        for (int i = 0; i < books.size(); i++) {
            cout << "\nBook ID: " << books[i].bookID;
            cout << "\nTitle: " << books[i].title;
            cout << "\nAuthor: " << books[i].author;
            cout << "\nStatus: "
                 << (books[i].isIssued ? "Issued" : "Available");
            cout << "\n";
        }
    }

    void searchBook() {
        int id;
        cout << "\nEnter Book ID: ";
        cin >> id;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].bookID == id) {
                cout << "\nBook Found!";
                cout << "\nTitle: " << books[i].title;
                cout << "\nAuthor: " << books[i].author << "\n";
                return;
            }
        }

        cout << "\nBook not found!\n";
    }

    void deleteBook() {
        int id;
        cout << "\nEnter Book ID to delete: ";
        cin >> id;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].bookID == id) {
                books.erase(books.begin() + i);
                cout << "\nBook deleted successfully!\n";
                return;
            }
        }

        cout << "\nBook not found!\n";
    }
};
