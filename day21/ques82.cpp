//Write a program to Reverse a string.

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
void reverse_string(char str[])
{
    int start=0;
    int end=get_string_length(str)-1;

    while(start<end)
    {
        char temp =  str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }
}
int main()
{
    char str[100];

    cout<<"Enter a string = ";
    cin.get(str,100);

    int length = get_string_length(str);
    reverse_string(str);

    cout<<"The reverse string is : "<<str<<endl;
    return 0;
    
}