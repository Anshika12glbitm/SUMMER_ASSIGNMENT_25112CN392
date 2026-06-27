//

#include <iostream>
using namespace std;


struct Employee {
    int emp_id;
    char name[50];
    char department[30];
    double salary;
};

int main() {
    Employee database[100]; 
    int current_emp_count = 0;
    int choice;

    do {
        cout << "\n=========================================" << endl;
        cout << "       EMPLOYEE MANAGEMENT SYSTEM      " << endl;
        cout << "=========================================" << endl;
        cout << " 1. Add New Employee Record" << endl;
        cout << " 2. Display All Employee Directory" << endl;
        cout << " 3. Search Employee Profile by ID" << endl;
        cout << " 4. Modify Employee Salary" << endl;
        cout << " 5. Exit Management Console" << endl;
        cout << "=========================================" << endl;
        cout << "Select an option (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (current_emp_count >= 100) {
                    cout << " Database full! Cannot add more employee files." << endl;
                    break;
                }

                int temp_id;
                cout << "\nEnter New 4-Digit Employee ID: ";
                cin >> temp_id;

                int id_exists = 0;
                for (int i = 0; i < current_emp_count; i++) {
                    if (database[i].emp_id == temp_id) {
                        id_exists = 1; 
                        break;
                    }
                }

                if (id_exists == 1) {
                    cout << " Error: Employee ID " << temp_id << " is already assigned to a profile!" << endl;
                    break;
                }

                database[current_emp_count].emp_id = temp_id;
                cin.ignore(); 

                char temp_name[50];
                cout << "Enter Employee Full Name: ";
                cin.get(temp_name, 50);
                cin.ignore(); 

                int char_idx = 0;
                while (temp_name[char_idx] != '\0') {
                    database[current_emp_count].name[char_idx] = temp_name[char_idx];
                    char_idx++;
                }
                database[current_emp_count].name[char_idx] = '\0'; 

                
                char temp_dept[30];
                cout << "Enter Assigned Department: ";
                cin.get(temp_dept, 30);
                cin.ignore();

                int dept_idx = 0;
                while (temp_dept[dept_idx] != '\0') {
                    database[current_emp_count].department[dept_idx] = temp_dept[dept_idx];
                    dept_idx++;
                }
                database[current_emp_count].department[dept_idx] = '\0';

                cout << "Enter Monthly Basic Salary: ₹";
                cin >> database[current_emp_count].salary;

                current_emp_count++; 
                cout << " Profile created and stored successfully!" << endl;
                break;
            }

            case 2: {
                if (current_emp_count == 0) {
                    cout << "\n The employee directory is currently empty." << endl;
                    break;
                }

                cout << "\n------------------------------------------------------------------------" << endl;
                cout << "EMP ID\t\tNAME\t\t\tDEPARTMENT\t\tSALARY" << endl;
                cout << "------------------------------------------------------------------------" << endl;
                for (int i = 0; i < current_emp_count; i++) {
                    cout << database[i].emp_id << "\t\t" 
                         << database[i].name << "\t\t\t" 
                         << database[i].department << "\t\t\t₹" 
                         << database[i].salary << endl;
                }
                cout << "------------------------------------------------------------------------" << endl;
                break;
            }

            case 3: {
                if (current_emp_count == 0) {
                    cout << "\n Database is empty. Nothing to search." << endl;
                    break;
                }

                int search_id;
                cout << "\nEnter target Employee ID to search: ";
                cin >> search_id;

                int profile_found = 0;
                for (int i = 0; i < current_emp_count; i++) {
                    if (database[i].emp_id == search_id) {
                        cout << "\n Employee File Found!" << endl;
                        cout << " ID:          " << database[i].emp_id << endl;
                        cout << " Name:        " << database[i].name << endl;
                        cout << " Department:  " << database[i].department << endl;
                        cout << " Salary:      ₹" << database[i].salary << endl;
                        profile_found = 1; 
                        break;
                    }
                }

                if (profile_found == 0) {
                    cout << " No active record matches Employee ID " << search_id << "." << endl;
                }
                break;
            }

            case 4: {
                if (current_emp_count == 0) {
                    cout << "\n Database is empty. No files available for modification." << endl;
                    break;
                }

                int update_id;
                cout << "\nEnter Employee ID to modify compensation: ";
                cin >> update_id;

                int profile_found = 0;
                for (int i = 0; i < current_emp_count; i++) {
                    if (database[i].emp_id == update_id) {
                        cout << "Current record details: " << database[i].name << " (₹" << database[i].salary << ")" << endl;
                        
                        double new_salary;
                        cout << "Enter New Salary Amount: ₹";
                        cin >> new_salary;

                        
                        if (new_salary <= 0) {
                            cout << " Operation aborted. Salary must be a positive number." << endl;
                        } else {
                            database[i].salary = new_salary; 
                            cout << " Success! Salary updated for " << database[i].name << "." << endl;
                        }
                        profile_found = 1;
                        break;
                    }
                }

                if (profile_found == 0) {
                    cout << " No active record matches Employee ID " << update_id << "." << endl;
                }
                break;
            }

            case 5: {
                cout << "\nClosing management framework dashboard. Goodbye! " << endl;
                break;
            }

            default: {
                cout << " Choice error! Select an execution branch from 1 to 5." << endl;
                break;
            }
        }

    } while (choice != 5);

    return 0;
}
