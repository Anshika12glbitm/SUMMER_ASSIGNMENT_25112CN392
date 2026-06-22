//Write a program to Check palindrome string.
// mom,dad,pop,tit.....

#include<iostream>
using namespace std;
int get_string_length(char str[100])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
void check_palindrome(char str[100])
{
    int length=get_string_length(str);
    char temp;
    int start=0;
    int end=length-1;
    char original_string=str[100];
   while(start<end)
    {
        if(str[start]==str[end])
        {
            start++;
            end--;
        }
        else
        {
            cout<<"the given string is not palindrome .";
            break;
        }

        cout<<"The given string is palindrome .";
    }
    
}

int main()
{
    char str[100];
    cout<<"Enter a string = ";
    cin>>str;

    get_string_length(str);
    check_palindrome(str);

}