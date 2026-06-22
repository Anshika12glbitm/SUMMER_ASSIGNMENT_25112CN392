//Write a program to Remove spaces from string.

#include<iostream>
using namespace std;
void remove_space(char str[100])
{
    int i=0,j=0;
    char str_no_space[100];
   while(str[i]!='\0')
   {
     if(!(str[i]==' '))
     {
        str_no_space[j]=str[i];
        j++;
     }
     i++;
   }
   str_no_space[j]='\0';

   cout << "String without spaces: " << str_no_space << endl;

}
int main()
{
    char str[100];
    cout<<"Enter a string : ";
    cin.get(str,100);

    remove_space(str);
    return 0;

}