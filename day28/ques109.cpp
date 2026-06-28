#include <iostream>
#include <string>

using namespace std;

const int MAX_BOOKS = 100;

class Book {
private:
    int id;
    string title;
    string author;
    bool isIssued;

public:
    Book() {
        id = 0;
        title = "";
        author = "";
        isIssued = false;
    }

    Book(int bookId, string bookTitle, string bookAuthor) {
        id = bookId;
        title = bookTitle;
        author = bookAuthor;
        isIssued = false;
    }

    int getId() const { return id; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool getIssuedStatus() const { return isIssued; }

    void issueBook() { isIssued = true; }
    void returnBook() { isIssued = false; }

    void displayBook() const {
        cout << "Book ID: " << id << "\n";
        cout << "Title  : " << title << "\n";
        cout << "Author : " << author << "\n";
        cout << "Status : ";
        if (isIssued) {
            cout << "Issued\n";
        } else {
            cout << "Available\n";
        }
        cout << "-----------------------\n";
    }
};

class Library {
private:
    Book books[MAX_BOOKS];
    int bookCount;

public:
    Library() {
        bookCount = 0;
    }

    void addBook() {
        if (bookCount >= MAX_BOOKS) {
            cout << "\nError: Library storage capacity reached (" << MAX_BOOKS << " books max).\n";
            return;
        }

        int id;
        string title, author;

        cout << "\nEnter Book ID (Integer): ";
        cin >> id;
        cin.ignore();

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getId() == id) {
                cout << "Error: A book with this ID already exists!\n";
                return;
            }
        }

        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);

        books[bookCount] = Book(id, title, author);
        bookCount++;
        cout << "Book added successfully!\n";
    }

    void viewBooks() const {
        if (bookCount == 0) {
            cout << "\nThe library is currently empty.\n";
            return;
        }

        cout << "\n--- Library Inventory ---\n";
        for (int i = 0; i < bookCount; i++) {
            books[i].displayBook();
        }
    }

    void searchBook() const {
        if (bookCount == 0) {
            cout << "\nThe library is empty.\n";
            return;
        }

        int id;
        cout << "\nEnter Book ID to search: ";
        cin >> id;

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getId() == id) {
                cout << "\nBook Found:\n";
                books[i].displayBook();
                return;
            }
        }
        cout << "Book with ID " << id << " not found.\n";
    }

    void issueBook() {
        if (bookCount == 0) {
            cout << "\nThe library is empty.\n";
            return;
        }

        int id;
        cout << "\nEnter Book ID to issue: ";
        cin >> id;

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getId() == id) {
                if (books[i].getIssuedStatus()) {
                    cout << "Book is already issued to someone else.\n";
                } else {
                    books[i].issueBook();
                    cout << "Book successfully issued!\n";
                }
                return;
            }
        }
        cout << "Book with ID " << id << " not found.\n";
    }

    void returnBook() {
        if (bookCount == 0) {
            cout << "\nThe library is empty.\n";
            return;
        }

        int id;
        cout << "\nEnter Book ID to return: ";
        cin >> id;

        for (int i = 0; i < bookCount; i++) {
            if (books[i].getId() == id) {
                if (!books[i].getIssuedStatus()) {
                    cout << "This book was not issued. It's already in the library.\n";
                } else {
                    books[i].returnBook();
                    cout << "Book successfully returned to the library!\n";
                }
                return;
            }
        }
        cout << "Book with ID " << id << " not found.\n";
    }
};

int main() {
    Library myLibrary;
    int choice;

    do {
        cout << "\n===============================\n";
        cout << "   LIBRARY MANAGEMENT SYSTEM   \n";
        cout << "===============================\n";
        cout << "1. Add New Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Issue a Book\n";
        cout << "5. Return a Book\n";
        cout << "6. Exit\n";
        cout << "===============================\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                myLibrary.addBook();
                break;
            case 2:
                myLibrary.viewBooks();
                break;
            case 3:
                myLibrary.searchBook();
                break;
            case 4:
                myLibrary.issueBook();
                break;
            case 5:
                myLibrary.returnBook();
                break;
            case 6:
                cout << "\nThank you for using the Library Management System. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 6.\n";
        }
    } while (choice != 6);

    return 0;
}
