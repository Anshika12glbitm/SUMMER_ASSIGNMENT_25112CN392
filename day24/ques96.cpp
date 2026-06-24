//Write a program to Remove duplicate characters.

#include <iostream>
using namespace std;

int find_length(char str[]) 
{
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') 
    {
        length++;
    }
    return length;
}

void remove_duplicate_characters(char str[]) 
{
    int length = find_length(str);

    int visited[100] = {0}; 
    
    cout << "String after removing duplicates: ";

    for (int i = 0; i < length; i++) 
    {
        if (visited[i] == 1) 
        {  
            continue;
        }

        cout << str[i];

        for (int j = i + 1; j < length; j++) 
        {
            if (str[i] == str[j]) 
            {
                visited[j] = 1; 
            }
        }
    }
    cout << endl;
}

int main() {
    char str[100];
    cout << "Enter a string = ";
    cin.get(str, 100);

    remove_duplicate_characters(str);

    return 0;
}
