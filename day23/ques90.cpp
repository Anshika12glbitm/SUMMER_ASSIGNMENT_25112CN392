//Write a program to Find first repeating character.


#include<iostream>
using namespace std;
int find_first_non_repeating_character(char str[100])
{
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++)
    {
        int count=0;
        for(int j =0; str[j]!='\0'&& str[j]!='\n';j++)
        {
            if(str[i]==str[j])
            {
                count ++;
            }
        }

        if(count>1)
        {
            return str[i];
        }
    }
    return '\0';
}
int main()
{
    char str[100];
    cout<<"Enter a string = ";
    cin.get(str,100);

    char result = find_first_non_repeating_character(str);

    if (result!='\0')
    cout<<"The first  repeating character in string is : "<<result<<endl;

    else
    cout<<"All characters are non repeating";

    return 0;
}