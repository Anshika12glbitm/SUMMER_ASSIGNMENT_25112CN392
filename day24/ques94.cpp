//Write a program to Compress a string.

#include<iostream>
using namespace std;

int find_string_length(char str[100])
{
    int length =0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}

void compress_string(char str[100])
{
    int length = find_string_length(str);
    if(find_string_length(str) == 0)
    {
        cout<<"The given string is empty .";
    }

    for (int i=0;i<length;i++)
    {
        int count =1;
        while(i+1<length && str[i+1]==str[i])
        {
            count++;
            i++;
        }
        cout<<str[i];
    }
}

int main()
{
    char str[100];
    cout<<"Enter a string : ";
    cin.get(str,100);//aaaabbbccd

    compress_string(str);
    return 0;

}