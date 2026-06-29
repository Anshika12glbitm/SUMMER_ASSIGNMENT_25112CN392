//Write a program to Create inventory management system.

#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 100;

void add_item(int ids[], string names[], int quantities[], double prices[], int &size)
{
    if (size >= MAX_ITEMS)
    {
        cout << "\nSorry !! Inventory storage is full cannot add more items . " << endl;
        return;
    }

    int id;
    cout << "\nEnter Item ID (Integer): ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "Error: An item with this ID already exists!" << endl;
            return;
        }
    }

    ids[size] = id;

    cout << "Enter Item Name: ";
    getline(cin, names[size]);

    cout << "Enter Quantity: ";
    cin >> quantities[size];

    cout << "Enter Price: ";
    cin >> prices[size];

    if (quantities[size] < 0 || prices[size] < 0)
    {
        cout << "Error: Quantity and Price cannot be negative!" << endl;
        return;
    }

    size++;
    cout << "Item added to inventory successfully !!" << endl;
}

void view_inventory(int ids[], string names[], int quantities[], double prices[], int size)
{
    if (size == 0)
    {
        cout << "\nInventory is currently empty ... Nothing to display ." << endl;
        return;
    }

    cout << "\n--- Current Stock Inventory ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Item ID   : " << ids[i] << "\n";
        cout << "Item Name : " << names[i] << "\n";
        cout << "Quantity  : " << quantities[i] << "\n";
        cout << "Price     : Rs. " << prices[i] << "\n";
        cout << "-----------------------" << endl;
    }
}

void search_item(int ids[], string names[], int quantities[], double prices[], int size)
{
    if (size == 0)
    {
        cout << "\nInventory is empty ... Cannot search anything ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Item ID to search: ";
    cin >> id;

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "\nItem Found:" << endl;
            cout << "Item ID   : " << ids[i] << "\n";
            cout << "Item Name : " << names[i] << "\n";
            cout << "Quantity  : " << quantities[i] << "\n";
            cout << "Price     : Rs. " << prices[i] << "\n";
            cout << "-----------------------" << endl;
            return;
        }
    }
    cout << "Item with ID " << id << " not found ." << endl;
}

void update_stock(int ids[], int quantities[], int size)
{
    if (size == 0)
    {
        cout << "\nInventory is empty ... Cannot update stock levels ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Item ID to update stock: ";
    cin >> id;

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            int action, qty;
            cout << "1. Restock (Add Quantity)\n2. Sell (Deduct Quantity)\nChoose action (1-2): ";
            cin >> action;
            cout << "Enter quantity: ";
            cin >> qty;

            if (qty <= 0)
            {
                cout << "Error: Quantity must be greater than zero!" << endl;
                return;
            }

            if (action == 1)
            {
                quantities[i] = quantities[i] + qty;
                cout << "Stock successfully updated !!" << endl;
            }
            else if (action == 2)
            {
                if (quantities[i] < qty)
                {
                    cout << "Error: Not enough stock available in warehouse!" << endl;
                }
                else
                {
                    quantities[i] = quantities[i] - qty;
                    cout << "Stock successfully deducted !!" << endl;
                }
            }
            else
            {
                cout << "Invalid action choice!" << endl;
            }
            return;
        }
    }
    cout << "Item with ID " << id << " not found ." << endl;
}

int main()
{
    int choice;
    int size = 0;

    int item_ids[MAX_ITEMS];
    string item_names[MAX_ITEMS];
    int item_quantities[MAX_ITEMS];
    double item_prices[MAX_ITEMS];

    do
    {
        cout << "\n===============================" << endl;
        cout << "   INVENTORY MANAGEMENT SYSTEM " << endl;
        cout << "===============================" << endl;
        cout << "1. Add New Item" << endl;
        cout << "2. View Current Inventory" << endl;
        cout << "3. Search Item by ID" << endl;
        cout << "4. Update Stock Levels" << endl;
        cout << "5. Exit" << endl;
        cout << "===============================" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                add_item(item_ids, item_names, item_quantities, item_prices, size);
                break;
            case 2:
                view_inventory(item_ids, item_names, item_quantities, item_prices, size);
                break;
            case 3:
                search_item(item_ids, item_names, item_quantities, item_prices, size);
                break;
            case 4:
                update_stock(item_ids, item_quantities, size);
                break;
            case 5:
                cout << "\nExiting inventory system. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please enter a number between 1 and 5 only ." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
