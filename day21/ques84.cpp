//Write a program to Convert lowercase to uppercase.

#include <iostream>

using namespace std;

int get_string_length(char str[])
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}
void convert_to_uppercase(char str[]) 
{
    int length = get_string_length(str);
    
    for (int i = 0; i < length; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[100];
    
    cout << "Enter a string in lowercase = ";
    cin.getline(str, 100);
    
    convert_to_uppercase(str);
    
    cout << "Uppercase string : " << str << endl;
    
    return 0;
}
