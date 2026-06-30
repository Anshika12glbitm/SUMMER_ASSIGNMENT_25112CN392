#include <iostream>
#include <string>

using namespace std;

const int MAX_BOOKS = 100;

void add_book(int ids[], string titles[], string authors[], bool statuses[], int &size)
{
    if (size >= MAX_BOOKS)
    {
        cout << "\nSorry ! Library storage catalog is full cannot add more books ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Book ID (Integer): ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "Error: A book with this ID already exists!" << endl;
            return;
        }
    }

    ids[size] = id;

    cout << "Enter Book Title: ";
    getline(cin, titles[size]);

    cout << "Enter Author Name: ";
    getline(cin, authors[size]);

    statuses[size] = false;
    size++;
    cout << "Book added to catalog successfully !!" << endl;
}

void view_books(int ids[], string titles[], string authors[], bool statuses[], int size)
{
    if (size == 0)
    {
        cout << "\nThe library inventory is empty ... Nothing to display ." << endl;
        return;
    }

    cout << "\n--- Library Inventory List ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Book ID: " << ids[i] << "\n";
        cout << "Title  : " << titles[i] << "\n";
        cout << "Author : " << authors[i] << "\n";
        cout << "Status : ";
        if (statuses[i])
        {
            cout << "Issued\n";
        }
        else
        {
            cout << "Available\n";
        }
        cout << "-----------------------" << endl;
    }
}

void search_book(int ids[], string titles[], string authors[], bool statuses[], int size)
{
    if (size == 0)
    {
        cout << "\nThe library is empty ... Cannot search anything ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "\nBook Found:" << endl;
            cout << "Book ID: " << ids[i] << "\n";
            cout << "Title  : " << titles[i] << "\n";
            cout << "Author : " << authors[i] << "\n";
            cout << "Status : ";
            if (statuses[i])
            {
                cout << "Issued\n";
            }
            else
            {
                cout << "Available\n";
            }
            cout << "-----------------------" << endl;
            return;
        }
    }
    cout << "Book with ID " << id << " not found ." << endl;
}

void issue_or_return(int ids[], bool statuses[], int size, int mode)
{
    if (size == 0)
    {
        cout << "\nThe library is empty ... Cannot execute operation ." << endl;
        return;
    }

    int id;
    if (mode == 1)
    {
        cout << "\nEnter Book ID to issue: ";
    }
    else
    {
        cout << "\nEnter Book ID to return: ";
    }
    cin >> id;

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            if (mode == 1)
            {
                if (statuses[i])
                {
                    cout << "Book is already issued to someone else ." << endl;
                }
                else
                {
                    statuses[i] = true;
                    cout << "Book successfully issued !!" << endl;
                }
            }
            else
            {
                if (!statuses[i])
                {
                    cout << "This book is not issued . It's already in the library ." << endl;
                }
                else
                {
                    statuses[i] = false;
                    cout << "Book successfully returned to library archive !!" << endl;
                }
            }
            return;
        }
    }
    cout << "Book with ID " << id << " not found ." << endl;
}

int main()
{
    int choice;
    int size = 0;

    int book_ids[MAX_BOOKS];
    string book_titles[MAX_BOOKS];
    string book_authors[MAX_BOOKS];
    bool issue_statuses[MAX_BOOKS];

    do
    {
        cout << "\n------------------------------------------------" << endl;
        cout << "               Mini Library System" << endl;
        cout << "------------------------------------------------" << endl;

        cout << "Main Menu : " << endl;
        cout << "1. Add New Book ." << endl;
        cout << "2. View All Books ." << endl;
        cout << "3. Search Book by ID ." << endl;
        cout << "4. Issue a Book ." << endl;
        cout << "5. Return a Book ." << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice (1-6): ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                add_book(book_ids, book_titles, book_authors, issue_statuses, size);
                break;
            case 2:
                view_books(book_ids, book_titles, book_authors, issue_statuses, size);
                break;
            case 3:
                search_book(book_ids, book_titles, book_authors, issue_statuses, size);
                break;
            case 4:
                issue_or_return(book_ids, issue_statuses, size, 1);
                break;
            case 5:
                issue_or_return(book_ids, issue_statuses, size, 2);
                break;
            case 6:
                cout << "\nExiting library system. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid option !! Please choose between 1 to 6 only ." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}