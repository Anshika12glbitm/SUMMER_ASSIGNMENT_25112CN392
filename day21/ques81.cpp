//Write a program to Find string length without strlen().

#include<iostream>
using namespace std;
int get_string_length(char str[])
{
    int length = 0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];

    cout<<"Enter a string = ";
    cin.get(str,100);

    int length = get_string_length(str);
    cout<<"The length of the string is = "<<length;

    return 0;
    
}