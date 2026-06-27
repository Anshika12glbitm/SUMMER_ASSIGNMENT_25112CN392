//Write a program to Create salary management system.

#include<iostream>
#include<vector>
#include<string> 
using namespace std;

struct employee { // making of structure
    int empID;
    string name;
    int age;
    float salary;
};

vector<employee> employees;

void addemployees() {
    employee s; 
    cout << "\nEnter your empID no : ";
    cin >> s.empID;
    cin.ignore(); 

    cout << "Enter name: ";
    getline(cin, s.name);
 
    cout << "Enter salary: ";
    cin >> s.salary;

    cout << "Enter your age: ";
    cin >> s.age;

    employees.push_back(s); 
    cout << "\n Details saved successfully!!\n";
}

void displayemployees() {
    if (employees.empty()) {
        cout << "\n NO DETAILS FOUND !!\n";
        return;
    }
    cout << "\n=========================================" << endl;
    cout << "          EMPLOYEE DIRECTORY           " << endl;
    cout << "=========================================" << endl;
    for (size_t i = 0; i < employees.size(); i++) {
        cout << " empID no : " << employees[i].empID << endl;
        cout << "   Name     : " << employees[i].name << endl;
        cout << "   Age      : " << employees[i].age << endl;
        cout << "   Salary   : ₹" << employees[i].salary << endl;
        cout << "-----------------------------------------" << endl;
    }
}

void searchdetails() {
    if (employees.empty()) {
        cout << "\n Database is empty. Nothing to search.\n";
        return;
    }
    
    int empID;
    cout << "\nEnter Employee ID to search: "; 
    cin >> empID;
    
    for (size_t i = 0; i < employees.size(); i++) {
        if (employees[i].empID == empID) {
            cout << "\n RECORD FOUND:\n";
            cout << " empID no : " << employees[i].empID << endl;
            cout << "   Name     : " << employees[i].name << endl;
            cout << "   Age      : " << employees[i].age << endl;
            cout << "   Salary   : ₹" << employees[i].salary << endl;
            return;
        }
    }
    cout << " Employee details not found.\n";   
}

void update() {
    if (employees.empty()) {
        cout << "\n Database is empty. Nothing to update.\n";
        return;
    }

    int empID;
    cout << "\nEnter Employee ID to update: "; 
    cin >> empID;
    
    for (size_t i = 0; i < employees.size(); i++) {
        if (employees[i].empID == empID) {
            cout << "Current Name: " << employees[i].name << endl;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, employees[i].name);
            
            cout << "Enter new age: ";
            cin >> employees[i].age;
            
            cout << "Enter new/updated salary: ₹";
            cin >> employees[i].salary;
            
            cout << " RECORD UPDATED SUCCESSFULLY\n";
            return;
        }
    }
    cout << " Record not found\n";
}

void deletedetails() {
    if (employees.empty()) {
        cout << "\n Database is empty. Nothing to delete.\n";
        return;
    }

    int empID;
    cout << "\nEnter ID of employee to delete: ";
    cin >> empID;
    
    for (size_t i = 0; i < employees.size(); i++) {
        if (employees[i].empID == empID) {
           
            employees.erase(employees.begin() + i);
            cout << " Record deleted successfully!!\n";
            return;
        }
    }
    cout << " Employee not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n=========================================" << endl;
        cout << " 1. Add Employee" << endl;
        cout << " 2. Display Data of Employees" << endl;
        cout << " 3. Search Employee" << endl;
        cout << " 4. Update Data of Employee" << endl;
        cout << " 5. Delete Data of Employee" << endl;
        cout << " 6. Exit Program" << endl;
        cout << "=========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: addemployees(); break;
            case 2: displayemployees(); break;
            case 3: searchdetails(); break;
            case 4: update(); break;
            case 5: deletedetails(); break;
            case 6: cout << "EXITING PROGRAM....\n"; break;
            default: cout << " Invalid Choice! Please enter a choice between 1-6.\n"; break;
        }
    } while (choice != 6);
    
    return 0;
}
