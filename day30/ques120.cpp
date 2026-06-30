#include <iostream>
#include <string>

using namespace std;

const int MAX_SUBMISSIONS = 100;

void log_submission(int roll_numbers[], string student_names[], string assignment_names[], int days_late[], int &size)
{
    if (size >= MAX_SUBMISSIONS)
    {
        cout << "\n Size if full ... cannot add more record ." << endl;
        return;
    }

    int roll;
    cout << "\nEnter Student Roll Number (Integer): ";
    cin >> roll;
    cin.ignore();

    for (int i = 0; i < size; i++)
    {
        if (roll_numbers[i] == roll)
        {
            cout << "Warning: Submission record with this roll number already exists." << endl;
        }
    }

    roll_numbers[size] = roll;

    cout << "Enter Student Name: ";
    getline(cin, student_names[size]);

    cout << "Enter Assignment Name/Code: ";
    getline(cin, assignment_names[size]);

    cout << "Enter number of days late (Enter 0 if submitted on time): ";
    cin >> days_late[size];

    if (days_late[size] < 0)
    {
        cout << "Error: Days late cannot be negative! " << endl;
        days_late[size] = 0;
    }

    size++;
    cout << "Assignment submission logged successfully !!" << endl;
}

void view_all_submissions(int roll_numbers[], string student_names[], string assignment_names[], int days_late[], int size)
{
    if (size == 0)
    {
        cout << "\nNo submissions found in the database directory." << endl;
        return;
    }

    cout << "\n--- Student Assignment Submission Log ---" << endl;
    for (int i = 0; i < size; i++)
    {
        int penalty = days_late[i] * 5; 
        if (penalty > 50) 
        {
            penalty = 50; 
        }

        cout << "Roll Number    : " << roll_numbers[i] << "\n";
        cout << "Student Name   : " << student_names[i] << "\n";
        cout << "Assignment Name: " << assignment_names[i] << "\n";
        cout << "Days Late      : " << days_late[i] << "\n";
        cout << "Grade Penalty  : -" << penalty << " points\n";
        
        if (days_late[i] > 0)
        {
            cout << "Status         : LATE SUBMISSION\n";
        }
        else
        {
            cout << "Status         : ON TIME\n";
        }
        cout << "-----------------------" << endl;
    }
}

void search_by_roll(int roll_numbers[], string student_names[], string assignment_names[], int days_late[], int size)
{
    if (size == 0)
    {
        cout << "\nNo submissions found in the database directory." << endl;
        return;
    }

    int target_roll;
    bool found = false;
    cout << "\nEnter Student Roll Number to search: ";
    cin >> target_roll;

    for (int i = 0; i < size; i++)
    {
        if (roll_numbers[i] == target_roll)
        {
            int penalty = days_late[i] * 5;
            if (penalty > 50) penalty = 50;

            cout << "\n--- Submission Details Found ---" << endl;
            cout << "Roll Number    : " << roll_numbers[i] << "\n";
            cout << "Student Name   : " << student_names[i] << "\n";
            cout << "Assignment Name: " << assignment_names[i] << "\n";
            cout << "Days Late      : " << days_late[i] << "\n";
            cout << "Grade Penalty  : -" << penalty << " points\n";
            cout << "---------------------------------" << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No matching submission records found for Roll Number " << target_roll << "." << endl;
    }
}

int main()
{
    int choice;
    int size = 0;

    int roll_numbers[MAX_SUBMISSIONS];
    string student_names[MAX_SUBMISSIONS];
    string assignment_names[MAX_SUBMISSIONS];
    int days_late[MAX_SUBMISSIONS];

    do
    {
        cout << "\n------------------------------------------------" << endl;
        cout << "         Assignment Submission Logger" << endl;
        cout << "------------------------------------------------" << endl;

        cout << "Main Menu : " << endl;
        cout << "1. Log New Assignment Submission ." << endl;
        cout << "2. View All Logged Submissions ." << endl;
        cout << "3. Search Submission by Roll Number ." << endl;
        cout << "4. Exit Logger Application" << endl;

        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
            case 1:
                log_submission(roll_numbers, student_names, assignment_names, days_late, size);
                break;
            case 2:
                view_all_submissions(roll_numbers, student_names, assignment_names, days_late, size);
                break;
            case 3:
                search_by_roll(roll_numbers, student_names, assignment_names, days_late, size);
                break;
            case 4:
                cout << "\nExiting !!" << endl;
                break;
            default:
                cout << "\nInvalid choice !! ." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
