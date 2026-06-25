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

void merge_sorted_string_arrays(char arr1[][100], int size1, char arr2[][100], int size2) {
    char result[200][100]; 
    int i = 0; 
    int j = 0; 
    int k = 0; 

    while (i < size1 && j < size2) {
        if (compare_strings(arr1[i], arr2[j]) <= 0) {
            int char_idx = 0;
            while (arr1[i][char_idx] != '\0') {
                result[k][char_idx] = arr1[i][char_idx];
                char_idx++;
            }
            result[k][char_idx] = '\0';
            i++;
        } 
        else {
            int char_idx = 0;
            while (arr2[j][char_idx] != '\0') {
                result[k][char_idx] = arr2[j][char_idx];
                char_idx++;
            }
            result[k][char_idx] = '\0';
            j++;
        }
        k++;
    }

    while (i < size1) {
        int char_idx = 0;
        while (arr1[i][char_idx] != '\0') {
            result[k][char_idx] = arr1[i][char_idx];
            char_idx++;
        }
        result[k][char_idx] = '\0';
        i++;
        k++;
    }

    while (j < size2) {
        int char_idx = 0;
        while (arr2[j][char_idx] != '\0') {
            result[k][char_idx] = arr2[j][char_idx];
            char_idx++;
        }
        result[k][char_idx] = '\0';
        j++;
        k++;
    }

    cout << "\nMerged Sorted Array: " << endl;
    for (int index = 0; index < k; index++) {
        cout << result[index] << " ";
    }
    cout << endl;
}

int main() {
    char arr1[100][100];
    char arr2[100][100];
    int size1, size2;

    cout << "Enter number of elements in first sorted array: ";
    cin >> size1;
    cin.ignore(); 

    cout << "Enter elements for first array (in sorted order):" << endl;
    for(int i = 0; i < size1; i++) {
        cout << "Element " << i + 1 << ": ";
        cin.get(arr1[i], 100);
        cin.ignore();
    }
    cout << "\nEnter number of elements in second sorted array: ";
    cin >> size2;
    cin.ignore(); 

    cout << "Enter elements for second array (in sorted order):" << endl;
    for(int i = 0; i < size2; i++) {
        cout << "Element " << i + 1 << ": ";
        cin.get(arr2[i], 100);
        cin.ignore(); 
    }
    merge_sorted_string_arrays(arr1, size1, arr2, size2);

    return 0;
}
