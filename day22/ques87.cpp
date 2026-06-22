//Write a program to Character frequency.

#include <iostream>
using namespace std;

void count_frequency_nested(char str[]) 
{

    int length = 0;
    while(str[length] != '\0') 
    {
        length++;
    }

    cout << "\nCharacter Frequencies:" << endl;

    for (int i = 0; i < length; i++) 
    {
        
        if (str[i] == ' ') 
        continue; 

        int already_counted = 0;
        for (int j = 0; j < i; j++) 
        {
            if (str[i] == str[j]) 
            {
                already_counted = 1;
                break;
            }
        }

        if (already_counted == 0) 
        {
            int count = 1;
            for (int j = i + 1; j < length; j++) 
            {
                if (str[i] == str[j]) 
                {
                    count++;
                }
            }
            cout << "'" << str[i] << "' occurs " << count << " times" << endl;
        }
    }
}

int main() {
    char str[100];
    cout << "Enter a string = ";
    cin.get(str, 100);

    count_frequency_nested(str);

    return 0;
}
