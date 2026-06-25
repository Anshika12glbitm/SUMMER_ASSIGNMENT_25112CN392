//Write a program to Sort names alphabetically.

#include <iostream>
using namespace std;
int compare_strings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

void copy_string(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void sort_names_alphabetically(char names[][100], int size) {
    char temp[100]; 

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare_strings(names[j], names[j + 1]) > 0) {
                copy_string(temp, names[j]);
                copy_string(names[j], names[j + 1]);
                copy_string(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int size;
    char names[100][100];

    cout << "Enter the number of names: ";
    cin >> size;
    cin.ignore(); 

    cout << "Enter " << size << " names:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Name " << i + 1 << ": ";
        cin.get(names[i], 100);
        cin.ignore(); 
    }

    sort_names_alphabetically(names, size);

    cout << "\nNames in Alphabetical Order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
