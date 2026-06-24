//Write a program to Check string rotation.

#include <iostream>
using namespace std;

int find_length(char str[100]) {
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    return length;
}


bool check_string_rotation(char str_1[100], char str_2[100]) {
    int length_1 = find_length(str_1);
    int length_2 = find_length(str_2);

    if (length_1 != length_2) {
        return false;
    }
    
    if (length_1 == 0) {
        return true;
    }

    for (int start_index = 0; start_index < length_1; start_index++) {
        bool match_found = true;

      
        for (int j = 0; j < length_2; j++) {
            
            int rotation_index = (start_index + j) % length_1;

            if (str_1[rotation_index] != str_2[j]) {
                match_found = false;
                break; 
            }
        }

        
        if (match_found) {
            return true;
        }
    }

    return false; 
}

int main() {
    char str_1[100];
    cout << "Enter first string: ";
    cin.get(str_1, 100);
    cin.ignore();

    char str_2[100];
    cout << "Enter second string: ";
    cin.get(str_2, 100);

    if (check_string_rotation(str_1, str_2)) {
        cout << "The strings are rotations of each other." << endl;
    } else {
        cout << "The strings are not rotations of each other." << endl;
    }

    return 0;
}
