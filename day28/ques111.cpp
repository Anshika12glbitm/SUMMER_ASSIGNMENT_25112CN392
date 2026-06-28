//Write a program to Create ticket booking system.

#include <iostream>

using namespace std;

const int MAX_TICKETS = 100;
const int MAX_NAME_LEN = 50;

class Ticket {
private:
    int ticketId;
    char passengerName[MAX_NAME_LEN];
    char destination[MAX_NAME_LEN];
    double price;

public:
    Ticket() {
        ticketId = 0;
        passengerName[0] = '\0';
        destination[0] = '\0';
        price = 0.0;
    }

    Ticket(int id, const char* name, const char* dest, double amt) {
        ticketId = id;
        
        int i = 0;
        while (name[i] != '\0' && i < MAX_NAME_LEN - 1) {
            passengerName[i] = name[i];
            i++;
        }
        passengerName[i] = '\0';

        int j = 0;
        while (dest[j] != '\0' && j < MAX_NAME_LEN - 1) {
            destination[j] = dest[j];
            j++;
        }
        destination[j] = '\0';

        price = amt;
    }

    int getTicketId() const { return ticketId; }
    const char* getPassengerName() const { return passengerName; }
    const char* getDestination() const { return destination; }
    double getPrice() const { return price; }

    void displayTicket() const {
        cout << "Ticket ID     : " << ticketId << "\n";
        cout << "Passenger Name: " << passengerName << "\n";
        cout << "Destination   : " << destination << "\n";
        cout << "Ticket Price  : Rs. " << price << "\n";
        cout << "-----------------------\n";
    }
};

class TicketSystem {
private:
    Ticket tickets[MAX_TICKETS];
    int ticketCount;

public:
    TicketSystem() {
        ticketCount = 0;
    }

    void bookTicket() {
        if (ticketCount >= MAX_TICKETS) {
            cout << "\nError: Booking capacity reached (" << MAX_TICKETS << " tickets max).\n";
            return;
        }

        int id;
        char name[MAX_NAME_LEN];
        char dest[MAX_NAME_LEN];
        double price;

        cout << "\nEnter Booking ID (Integer): ";
        cin >> id;
        cin.ignore();

        for (int i = 0; i < ticketCount; i++) {
            if (tickets[i].getTicketId() == id) {
                cout << "Error: A ticket with this ID already exists!\n";
                return;
            }
        }

        cout << "Enter Passenger Name: ";
        cin.getline(name, MAX_NAME_LEN);
        cout << "Enter Destination: ";
        cin.getline(dest, MAX_NAME_LEN);
        cout << "Enter Ticket Price: ";
        cin >> price;

        if (price < 0) {
            cout << "Error: Ticket price cannot be negative!\n";
            return;
        }

        tickets[ticketCount] = Ticket(id, name, dest, price);
        ticketCount++;
        cout << "Ticket booked successfully!\n";
    }

    void viewAllTickets() const {
        if (ticketCount == 0) {
            cout << "\nNo active bookings found in the system.\n";
            return;
        }

        cout << "\n--- Master Booking List ---\n";
        for (int i = 0; i < ticketCount; i++) {
            tickets[i].displayTicket();
        }
    }

    void searchTicket() const {
        if (ticketCount == 0) {
            cout << "\nNo active bookings found in the system.\n";
            return;
        }

        int id;
        cout << "\nEnter Ticket ID to search: ";
        cin >> id;

        for (int i = 0; i < ticketCount; i++) {
            if (tickets[i].getTicketId() == id) {
                cout << "\nBooking Found:\n";
                tickets[i].displayTicket();
                return;
            }
        }
        cout << "Ticket ID " << id << " not found.\n";
    }

    void cancelTicket() {
        if (ticketCount == 0) {
            cout << "\nNo active bookings found in the system.\n";
            return;
        }

        int id;
        cout << "\nEnter Ticket ID to cancel: ";
        cin >> id;

        for (int i = 0; i < ticketCount; i++) {
            if (tickets[i].getTicketId() == id) {
                for (int j = i; j < ticketCount - 1; j++) {
                    tickets[j] = tickets[j + 1];
                }
                ticketCount--;
                cout << "Ticket successfully cancelled!\n";
                return;
            }
        }
        cout << "Ticket ID " << id << " not found.\n";
    }
};

int main() {
    TicketSystem system;
    int choice;

    do {
        cout << "\n===============================\n";
        cout << "     TICKET BOOKING SYSTEM     \n";
        cout << "===============================\n";
        cout << "1. Book New Ticket\n";
        cout << "2. View All Bookings\n";
        cout << "3. Search Booking by ID\n";
        cout << "4. Cancel a Ticket\n";
        cout << "5. Exit\n";
        cout << "===============================\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.bookTicket();
                break;
            case 2:
                system.viewAllTickets();
                break;
            case 3:
                system.searchTicket();
                break;
            case 4:
                system.cancelTicket();
                break;
            case 5:
                cout << "\nThank you for using the Ticket Booking System. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
