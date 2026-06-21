//Write a program to Count vowels and consonants.

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
void vowel_consonant_count(char str[100])
{
    int length=get_string_length(str);
    int vowel=0,consonant=0;
    for(int i=0;i<length;i++)
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='I' || str[i]=='i' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            vowel++;
        }
        else if(( str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        {
            consonant++;
        }
    }
    cout<<" Vowels : "<<vowel<<endl;
    cout<<" consonents : "<<consonant;
}
int main()
{
    char str[100];
    cout<<"Enter the string = ";
    cin.get(str,100);

    vowel_consonant_count(str);
}