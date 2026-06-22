//Write a program to Count words in a sentence.

#include<iostream>
using namespace std;
int get_string_length(char str[])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}

int count_words(char str[])
{
    int length=get_string_length(str);
    int words=0;
    for(int i=0;i<length;i++)
    {
        if(str[i]!=' ' && (str[i+1]==' ' || str[i+1]=='\0'))
        {
            words++;
        }
    }
    return words;
}
int main()
{
    char str[100];
    cout<<"enter the string  = ";
    cin.get(str,100);

    int words= count_words(str);

    cout<<str<<" has "<<words<<" words . ";

    return 0;
}