//

#include <iostream>
using namespace std;

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    Student database[100]; 
    int current_student_count = 0;
    int choice;

    do {
        cout << "\n=========================================" << endl;
        cout << "               STUDENT RECORD     " << endl;
        cout << "=========================================" << endl;
        cout << " 1. Add New Student Record" << endl;
        cout << " 2. Display All Student Records" << endl;
        cout << " 3. Search Student by Roll Number" << endl;
        cout << " 4. Exit System" << endl;
        cout << "=========================================" << endl;
        cout << "Select an option (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (current_student_count >= 100) {
                    cout << " Database full! Cannot add more records." << endl;
                    break;
                }

                int temp_roll;
                cout << "\nEnter Roll Number: ";
                cin >> temp_roll;

                
                int roll_exists = 0; 
                for (int i = 0; i < current_student_count; i++) {
                    if (database[i].roll_number == temp_roll) {
                        roll_exists = 1; 
                        break;
                    }
                }

                if (roll_exists == 1) {
                    cout << " Error: A student with Roll Number " << temp_roll << " already exists!" << endl;
                    break;
                }

                database[current_student_count].roll_number = temp_roll;
                cin.ignore();

                char temp_name[50];
                cout << "Enter Student Name: ";
                cin.get(temp_name, 50);
                cin.ignore(); 

               
                int char_idx = 0;
                while (temp_name[char_idx] != '\0') {
                    database[current_student_count].name[char_idx] = temp_name[char_idx];
                    char_idx++;
                }
                database[current_student_count].name[char_idx] = '\0'; 

                cout << "Enter Marks Obtained: ";
                cin >> database[current_student_count].marks;

                current_student_count++; 
                cout << " Student record added successfully!" << endl;
                break;
            }

            case 2: {
                if (current_student_count == 0) {
                    cout << "\n The student database is currently empty." << endl;
                    break;
                }

                cout << "\n--------------------------------------------------" << endl;
                cout << "ROLL NO.\tNAME\t\t\tMARKS" << endl;
                cout << "--------------------------------------------------" << endl;
                for (int i = 0; i < current_student_count; i++) {
                    cout << database[i].roll_number << "\t\t" 
                         << database[i].name << "\t\t\t" 
                         << database[i].marks << endl;
                }
                cout << "--------------------------------------------------" << endl;
                break;
            }

            case 3: {
                if (current_student_count == 0) {
                    cout << "\n The student database is empty. Nothing to search." << endl;
                    break;
                }

                int search_roll;
                cout << "\nEnter the Roll Number to search: ";
                cin >> search_roll;

               
                int found = 0; 
                for (int i = 0; i < current_student_count; i++) {
                    if (database[i].roll_number == search_roll) {
                        cout << "\n Record Found!" << endl;
                        cout << " Roll Number: " << database[i].roll_number << endl;
                        cout << " Name:        " << database[i].name << endl;
                        cout << " Marks:       " << database[i].marks << endl;
                        found = 1; 
                        break;
                    }
                }

                if (found == 0) {
                    cout << " No student found with Roll Number " << search_roll << "." << endl;
                }
                break;
            }

            case 4: {
                cout << "\nExiting Student Database System. Goodbye! " << endl;
                break;
            }

            default: {
                cout << " Invalid choice! Please pick a valid option from the menu." << endl;
                break;
            }
        }

    } while (choice != 4);

    return 0;
}
