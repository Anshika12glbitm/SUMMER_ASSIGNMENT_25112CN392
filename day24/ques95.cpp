//Write a program to Find longest word

#include<iostream>
using namespace std;
int find_length(char str[100])
{
    int length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    return length;
}
void find_longest_word(char str[100])
{
    int length=find_length(str);

    int current_length=0;
    int max_length=0;
    int current_start_index=0;
    int max_start_index=0;

    for(int i=0;i<=length;i++)
    {
        if(str[i]==' ' || str[i]=='\0' || str[i]==',' || str[i]=='.')
        {
            if(current_length > max_length)
            {
                max_length=current_length;
                max_start_index=current_start_index;
            }
            current_length=0;
            current_start_index=i+1;
        }
        else
        {
            current_length++;
        }
    }
        cout << "The longest word is: ";
        for (int i = max_start_index; i < max_start_index + max_length; i++) 
        {
            cout << str[i];
        }
        cout << " (Length: " << max_length << ")" << endl;    
}
int main()
{
    char str[100];
    cout<<"Enter a sentence = ";
    cin.get(str,100);

    find_longest_word(str);
    return 0;
}