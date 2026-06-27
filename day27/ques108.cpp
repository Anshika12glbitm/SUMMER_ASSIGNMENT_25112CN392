#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student { 
    int rollNo;
    string name;
    int math;
    int science;
    int english;
    int total;
    float percentage;
    string grade; 
};

vector<student> students; 

void addStudent() {
    student s;
    cout << "\nEnter your Roll No: ";
    cin >> s.rollNo;
    cin.ignore(); 

    cout << "Enter name: ";
    getline(cin, s.name);
 
    cout << "Enter Mathematics marks (0-100): ";
    cin >> s.math;
    cout << "Enter Science marks (0-100): ";
    cin >> s.science;
    cout << "Enter English marks (0-100): ";
    cin >> s.english;

    s.total = s.math + s.science + s.english;
    s.percentage = (s.total / 300.0) * 100.0;

    if (s.math < 33 || s.science < 33 || s.english < 33) {
        s.grade = "F (Fail)";
    } else if (s.percentage >= 90.0) {
        s.grade = "A+";
    } else if (s.percentage >= 75.0) {
        s.grade = "A";
    } else if (s.percentage >= 50.0) {
        s.grade = "B";
    } else {
        s.grade = "C";
    }

    students.push_back(s); 
    cout << "\n Marksheet details saved successfully!!\n";
}

void displayStudents() { 
    if (students.empty()) {
        cout << "\n NO MARKSHEETS FOUND IN THE SYSTEM !!\n";
        return;
    }
    cout << "\n=======================================================================" << endl;
    cout << "                       STUDENT PERFORMANCE DIRECTORY                   " << endl;
    cout << "=======================================================================" << endl;
    for (size_t i = 0; i < students.size(); i++) {
        cout << " Roll No   : " << students[i].rollNo << endl;
        cout << "   Name      : " << students[i].name << endl;
        cout << "   Total     : " << students[i].total << " / 300" << endl;
        cout << "   Percentage: " << students[i].percentage << "%" << endl;
        cout << "   Final Grade: " << students[i].grade << endl;
        cout << "-----------------------------------------------------------------------" << endl;
    }
}

void searchMarksheet() {
    if (students.empty()) {
        cout << "\n Database is empty. Nothing to search.\n";
        return;
    }

    int rollNo;
    cout << "\nEnter Student Roll No to generate print report: ";
    cin >> rollNo;

    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].rollNo == rollNo) {
            cout << "\n=============================================" << endl;
            cout << "             OFFICIAL REPORT CARD           " << endl;
            cout << "=============================================" << endl;
            cout << " Roll Number: " << students[i].rollNo << endl;
            cout << " Full Name:   " << students[i].name << endl;
            cout << "---------------------------------------------" << endl;
            cout << "SUBJECT\t\tMAX MARKS\tMARKS OBTAINED" << endl;
            cout << "---------------------------------------------" << endl;
            cout << "Mathematics\t100\t\t" << students[i].math << endl;
            cout << "Science\t\t100\t\t" << students[i].science << endl;
            cout << "English\t\t100\t\t" << students[i].english << endl;
            cout << "---------------------------------------------" << endl;
            cout << " TOTAL MARKS OBTAINED: " << students[i].total << " / 300" << endl;
            cout << " AGGREGATE PERCENTAGE: " << students[i].percentage << "%" << endl;
            cout << " FINAL ACADEMIC GRADE: " << students[i].grade << endl;
            cout << "=============================================" << endl;
            return;
        }
    }
    cout << " Marksheet details not found for Roll No: " << rollNo << "\n";   
}

void updateMarksheet() {
    if (students.empty()) {
        cout << "\n Database is empty. Nothing to update.\n";
        return;
    }

    int rollNo;
    cout << "\nEnter Student Roll No to update: ";
    cin >> rollNo;
    
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].rollNo == rollNo) {
            cout << "\nCurrent Name: " << students[i].name << endl;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, students[i].name);
            
            cout << "Enter updated Math marks: ";
            cin >> students[i].math;
            cout << "Enter updated Science marks: ";
            cin >> students[i].science;
            cout << "Enter updated English marks: ";
            cin >> students[i].english;

            
            students[i].total = students[i].math + students[i].science + students[i].english;
            students[i].percentage = (students[i].total / 300.0) * 100.0;

            if (students[i].math < 33 || students[i].science < 33 || students[i].english < 33) {
                students[i].grade = "F (Fail)";
            } else if (students[i].percentage >= 90.0) {
                students[i].grade = "A+";
            } else if (students[i].percentage >= 75.0) {
                students[i].grade = "A";
            } else if (students[i].percentage >= 50.0) {
                students[i].grade = "B";
            } else {
                students[i].grade = "C";
            }
            
            cout << " MARKSHEET RECORD UPDATED SUCCESSFULLY\n";
            return;
        }
    }
    cout << " Record not found\n";
}

void deleteMarksheet() {
    if (students.empty()) {
        cout << "\ Database is empty. Nothing to delete.\n";
        return;
    }

    int rollNo;
    cout << "\nEnter Roll No of student to delete: ";
    cin >> rollNo;
    
    for (size_t i = 0; i < students.size(); i++) {
        if (students[i].rollNo == rollNo) {
            students.erase(students.begin() + i); 
            cout << " Marksheet record deleted successfully!!\n";
            return;
        }
    }
    cout << " Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n=========================================" << endl;
        cout << "        MARKSHEET SYSTEM MENU          " << endl;
        cout << "=========================================" << endl;
        cout << " 1. Add Student Marksheet" << endl;
        cout << " 2. Display All Marksheets" << endl;
        cout << " 3. Search Student Report Card" << endl;
        cout << " 4. Update Marksheet Scores" << endl;
        cout << " 5. Delete Marksheet Record" << endl;
        cout << " 6. Exit Program" << endl;
        cout << "=========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchMarksheet(); break;
            case 4: updateMarksheet(); break;
            case 5: deleteMarksheet(); break;
            case 6: cout << "EXITING PROGRAM....\n"; break;
            default: cout << " Invalid Choice! Please enter a choice between 1-6.\n"; break;
        }
    } while (choice != 6);
    
    return 0;
}
