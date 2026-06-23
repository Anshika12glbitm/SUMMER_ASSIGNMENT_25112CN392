//Write a program to Check anagram strings.

#include<iostream>
using namespace std;
int find_length(char str[100])
{
    int length=0;
    while(str[length]!='\0' && str[length]!='\n')
    {
        length++;
    }
    return length;
}
int check_anagram_string(char str_1[100],char str_2[100])
{
    int length_1=find_length(str_1);
    int length_2=find_length(str_2);

    if (length_1 != length_2)
    {
        return false;
    }

    int visited[100]={0};
    for(int i=0;i<length_1;i++)
    {
        bool matchfound = false;
        for(int j=0;j<length_2;j++)
        {
            if(str_1[i]==str_2[j] && visited[j]==0)
            {

                visited[j]=1;
                matchfound=true;
                break;
            }
        }
        if(!matchfound)
        {
            return false;
        }
    }
}
int main()
{
    char str_1[100];
    cout<<"Enter a string = ";
    cin.get(str_1,100);

      cin.ignore(); 

    char str_2[100];
    cout<<"Enter a string = ";
    cin.get(str_2,100);

    check_anagram_string(str_1,str_2);

    if(check_anagram_string(str_1,str_2))
    cout<<"The strings are anagram";
    else
    cout<<"The strings are not anagram . ";

    return 0;
}