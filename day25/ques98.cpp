//Write a program to Find common characters in strings.

#include <iostream>
using namespace std;

int find_length(char str[]) {
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    return length;
}
void find_common_characters_single(char str[]) {
    int length = find_length(str);
    int visited[100] = {0}; 
    bool found_any = false;

    cout << "Common (repeated) characters are: ";

    for (int i = 0; i < length; i++) {

        if (str[i] == ' ') {
            continue;
        }

        if (visited[i] == 1) {
            continue;
        }

        bool is_duplicate = false;

        for (int j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                is_duplicate = true;
                visited[j] = 1; 
            }
        }
        if (is_duplicate) {
            cout << str[i] << " ";
            found_any = true;
        }
    }

    if (!found_any) {
        cout << "None (All characters are unique)";
    }
    cout << endl;
}

int main() {
    char str[100];
    cout << "Enter a string = ";
    cin.get(str, 100);

    find_common_characters_single(str);

    return 0;
}
