//Write a program to Sort words by length.

#include <iostream>
using namespace std;

int find_length(char str[]) {
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    return length;
}

void copy_string(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}

void sort_words_by_length(char words[][100], int size) {
    char temp[100]; 

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            
            int len1 = find_length(words[j]);
            int len2 = find_length(words[j + 1]);

            if (len1 > len2) {
                copy_string(temp, words[j]);
                copy_string(words[j], words[j + 1]);
                copy_string(words[j + 1], temp);
            }
        }
    }
}

int main() {
    int size;
    char words[100][100]; 

    cout << "Enter the number of words: ";
    cin >> size;
    cin.ignore(); 

    cout << "Enter " << size << " words:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Word " << i + 1 << ": ";
        cin.get(words[i], 100);
        cin.ignore();
    }

    sort_words_by_length(words, size);

    cout << "\nWords Sorted by Length:" << endl;
    for (int i = 0; i < size; i++) {
        cout << words[i] << " (Length: " << find_length(words[i]) << ")" << endl;
    }

    return 0;
}
