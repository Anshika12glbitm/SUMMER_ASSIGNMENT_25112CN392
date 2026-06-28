//Write a program to Create bank account system.

#include <iostream>
#include <string>

using namespace std;

const int MAX_ACCOUNTS = 100;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        accountHolder = "";
        balance = 0.0;
    }

    BankAccount(int accNum, string holder, double initialDeposit) {
        accountNumber = accNum;
        accountHolder = holder;
        balance = initialDeposit;
    }

    int getAccountNumber() const { return accountNumber; }
    string getAccountHolder() const { return accountHolder; }
    double getBalance() const { return balance; }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited Rs. " << amount << "\n";
        } else {
            cout << "Error: Invalid deposit amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Error: Invalid withdrawal amount!\n";
        } else if (amount > balance) {
            cout << "Error: Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Successfully withdrew Rs. " << amount << "\n";
        }
    }

    void displayAccount() const {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Current Balance: Rs. " << balance << "\n";
        cout << "-----------------------\n";
    }
};

class Bank {
private:
    BankAccount accounts[MAX_ACCOUNTS];
    int accountCount;

public:
    Bank() {
        accountCount = 0;
    }

    void createAccount() {
        if (accountCount >= MAX_ACCOUNTS) {
            cout << "\nError: Bank storage capacity reached (" << MAX_ACCOUNTS << " accounts max).\n";
            return;
        }

        int accNum;
        string holder;
        double initialDeposit;

        cout << "\nEnter Account Number (Integer): ";
        cin >> accNum;
        cin.ignore();

        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber() == accNum) {
                cout << "Error: An account with this number already exists!\n";
                return;
            }
        }

        cout << "Enter Account Holder Name: ";
        getline(cin, holder);
        cout << "Enter Initial Deposit: ";
        cin >> initialDeposit;

        if (initialDeposit < 0) {
            cout << "Error: Initial deposit cannot be negative!\n";
            return;
        }

        accounts[accountCount] = BankAccount(accNum, holder, initialDeposit);
        accountCount++;
        cout << "Account created successfully!\n";
    }

    void viewAllAccounts() const {
        if (accountCount == 0) {
            cout << "\nNo accounts found in the system.\n";
            return;
        }

        cout << "\n--- Bank Accounts List ---\n";
        for (int i = 0; i < accountCount; i++) {
            accounts[i].displayAccount();
        }
    }

    void searchAccount() const {
        if (accountCount == 0) {
            cout << "\nNo accounts found in the system.\n";
            return;
        }

        int accNum;
        cout << "\nEnter Account Number to search: ";
        cin >> accNum;

        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber() == accNum) {
                cout << "\nAccount Found:\n";
                accounts[i].displayAccount();
                return;
            }
        }
        cout << "Account number " << accNum << " not found.\n";
    }

    void performDeposit() {
        if (accountCount == 0) {
            cout << "\nNo accounts found in the system.\n";
            return;
        }

        int accNum;
        double amount;
        cout << "\nEnter Account Number for deposit: ";
        cin >> accNum;

        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber() == accNum) {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                accounts[i].deposit(amount);
                return;
            }
        }
        cout << "Account number " << accNum << " not found.\n";
    }

    void performWithdrawal() {
        if (accountCount == 0) {
            cout << "\nNo accounts found in the system.\n";
            return;
        }

        int accNum;
        double amount;
        cout << "\nEnter Account Number for withdrawal: ";
        cin >> accNum;

        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber() == accNum) {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                accounts[i].withdraw(amount);
                return;
            }
        }
        cout << "Account number " << accNum << " not found.\n";
    }
};

int main() {
    Bank myBank;
    int choice;

    do {
        cout << "\n===============================\n";
        cout << "     BANK MANAGEMENT SYSTEM    \n";
        cout << "===============================\n";
        cout << "1. Create New Account\n";
        cout << "2. View All Accounts\n";
        cout << "3. Search Account by Number\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
        cout << "===============================\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                myBank.createAccount();
                break;
            case 2:
                myBank.viewAllAccounts();
                break;
            case 3:
                myBank.searchAccount();
                break;
            case 4:
                myBank.performDeposit();
                break;
            case 5:
                myBank.performWithdrawal();
                break;
            case 6:
                cout << "\nThank you for using the Bank Management System. byee!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 6.\n";
        }
    } while (choice != 6);

    return 0;
}
