#include <iostream>
#include <string>

using namespace std;

const int MAX_EMPLOYEES = 100;

void add_employee(int ids[], string names[], string departments[], int &size)
{
    if (size >= MAX_EMPLOYEES)
    {
        cout << "\nSorry ! Employee database is full cannot add more records ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Employee ID (Integer): ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "Error: An employee with this ID already exists!" << endl;
            return;
        }
    }

    ids[size] = id;

    cout << "Enter Employee Name: ";
    getline(cin, names[size]);

    cout << "Enter Department: ";
    getline(cin, departments[size]);

    size++;
    cout << "Employee record created successfully !!" << endl;
}

void view_employees(int ids[], string names[], string departments[], int size)
{
    if (size == 0)
    {
        cout << "\nThe database is empty ... No employee records to display ." << endl;
        return;
    }

    cout << "\n--- Employee Directory List ---" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Employee ID: " << ids[i] << "\n";
        cout << "Name       : " << names[i] << "\n";
        cout << "Department : " << departments[i] << "\n";
        cout << "-----------------------" << endl;
    }
}

void search_employee(int ids[], string names[], string departments[], int size)
{
    if (size == 0)
    {
        cout << "\nThe database is empty ... Cannot search anything ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Employee ID to search: ";
    cin >> id;

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "\nEmployee Found:" << endl;
            cout << "Employee ID: " << ids[i] << "\n";
            cout << "Name       : " << names[i] << "\n";
            cout << "Department : " << departments[i] << "\n";
            cout << "-----------------------" << endl;
            return;
        }
    }
    cout << "Employee with ID " << id << " not found ." << endl;
}

void update_department(int ids[], string departments[], int size)
{
    if (size == 0)
    {
        cout << "\nThe database is empty ... Cannot update records ." << endl;
        return;
    }

    int id;
    cout << "\nEnter Employee ID to update department: ";
    cin >> id;
    cin.ignore();

    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
        {
            cout << "Current Department: " << departments[i] << endl;
            cout << "Enter New Department: ";
            getline(cin, departments[i]);
            cout << "Department updated successfully !!" << endl;
            return;
        }
    }
    cout << "Employee with ID " << id << " not found ." << endl;
}

int main()
{
    int choice;
    int size = 0;

    int employee_ids[MAX_EMPLOYEES];
    string employee_names[MAX_EMPLOYEES];
    string employee_departments[MAX_EMPLOYEES];

    do
    {
        cout << "\n------------------------------------------------" << endl;
        cout << "            Mini Employee Management" << endl;
        cout << "------------------------------------------------" << endl;

        cout << "Main Menu : " << endl;
        cout << "1. Add New Employee ." << endl;
        cout << "2. View All Employees ." << endl;
        cout << "3. Search Employee by ID ." << endl;
        cout << "4. Update Employee Department ." << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                add_employee(employee_ids, employee_names, employee_departments, size);
                break;
            case 2:
                view_employees(employee_ids, employee_names, employee_departments, size);
                break;
            case 3:
                search_employee(employee_ids, employee_names, employee_departments, size);
                break;
            case 4:
                update_department(employee_ids, employee_departments, size);
                break;
            case 5:
                cout << "\nExiting employee system. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid option !! Please choose between 1 to 5 only ." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
