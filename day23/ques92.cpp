//Write a program to Find maximum occurring character.

#include <iostream>
using namespace std;

int find_length(char str[100]) 
{
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') 
    {
        length++;
    }
    return length;
}

char find_max_occurring_char(char str[100]) 
{
    int length = find_length(str);
    int visited[100] = {0}; 
    
    char max_char = '\0';
    int max_count = 0;

    for (int i = 0; i < length; i++) 
    {
        if (str[i] == ' ') 
        {
            continue;
        }

        if (visited[i] == 1) 
        {
            continue;
        }

        int current_count = 1;

        for (int j = i + 1; j < length; j++) 
        {
            if (str[i] == str[j]) 
            {
                current_count++;
                visited[j] = 1; 
            }
        }

        if (current_count > max_count) 
        {
            max_count = current_count;
            max_char = str[i];
        }
    }

    return max_char;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);

    char result = find_max_occurring_char(str);

    if (result != '\0') {
        cout << "The maximum occurring character is: " << result << endl;
    } else {
        cout << "The string is empty." << endl;
    }

    return 0;
}
