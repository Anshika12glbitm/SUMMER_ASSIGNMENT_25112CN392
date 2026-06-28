//Write a program to Create contact management system.
#include <iostream>
#include <string>

using namespace std;

const int MAX_CONTACTS = 100;

class Contact {
private:
    string name;
    string phone;
    string email;

public:
    Contact() {
        name = "";
        phone = "";
        email = "";
    }

    Contact(string cName, string cPhone, string cEmail) {
        name = cName;
        phone = cPhone;
        email = cEmail;
    }

    string getName() const { return name; }
    string getPhone() const { return phone; }
    string getEmail() const { return email; }

    void displayContact() const {
        cout << "Name        : " << name << "\n";
        cout << "Phone Number: " << phone << "\n";
        cout << "Email ID    : " << email << "\n";
        cout << "-----------------------\n";
    }
};

class ContactSystem {
private:
    Contact contacts[MAX_CONTACTS];
    int contactCount;

public:
    ContactSystem() {
        contactCount = 0;
    }

    void addContact() {
        if (contactCount >= MAX_CONTACTS) {
            cout << "\nError: Storage capacity reached (" << MAX_CONTACTS << " contacts max).\n";
            return;
        }

        string name, phone, email;

        cout << "\nEnter Contact Name: ";
        getline(cin, name);

        for (int i = 0; i < contactCount; i++) {
            if (contacts[i].getName() == name) {
                cout << "Error: A contact with this name already exists!\n";
                return;
            }
        }

        cout << "Enter Phone Number: ";
        getline(cin, phone);
        cout << "Enter Email ID: ";
        getline(cin, email);

        contacts[contactCount] = Contact(name, phone, email);
        contactCount++;
        cout << "Contact saved successfully!\n";
    }

    void viewAllContacts() const {
        if (contactCount == 0) {
            cout << "\nAddress book is empty.\n";
            return;
        }

        cout << "\n--- Contact List ---\n";
        for (int i = 0; i < contactCount; i++) {
            contacts[i].displayContact();
        }
    }

    void searchContact() const {
        if (contactCount == 0) {
            cout << "\nAddress book is empty.\n";
            return;
        }

        string searchName;
        cout << "\nEnter Name to search: ";
        getline(cin, searchName);

        for (int i = 0; i < contactCount; i++) {
            if (contacts[i].getName() == searchName) {
                cout << "\nContact Found:\n";
                contacts[i].displayContact();
                return;
            }
        }
        cout << "Contact '" << searchName << "' not found.\n";
    }

    void deleteContact() {
        if (contactCount == 0) {
            cout << "\nAddress book is empty.\n";
            return;
        }

        string deleteName;
        cout << "\nEnter Name to delete: ";
        getline(cin, deleteName);

        for (int i = 0; i < contactCount; i++) {
            if (contacts[i].getName() == deleteName) {
                for (int j = i; j < contactCount - 1; j++) {
                    contacts[j] = contacts[j + 1];
                }
                contactCount--;
                cout << "Contact successfully deleted!\n";
                return;
            }
        }
        cout << "Contact '" << deleteName << "' not found.\n";
    }
};

int main() {
    ContactSystem system;
    int choice;

    do {
        cout << "\n===============================\n";
        cout << "    CONTACT MANAGEMENT SYSTEM  \n";
        cout << "===============================\n";
        cout << "1. Add New Contact\n";
        cout << "2. View All Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Delete a Contact\n";
        cout << "5. Exit\n";
        cout << "===============================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                system.addContact();
                break;
            case 2:
                system.viewAllContacts();
                break;
            case 3:
                system.searchContact();
                break;
            case 4:
                system.deleteContact();
                break;
            case 5:
                cout << "\nThank you for using the Contact Management System. bye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
