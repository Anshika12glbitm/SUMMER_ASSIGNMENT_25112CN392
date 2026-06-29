#include<iostream>
#include<string>
using namespace std;

void find_length(string str)
{
    cout<<"The Length of Given string "<<str<<" is "<<str.length()<<endl;
}
void to_concatenate(string &str,string sec_str)
{
    str=str+sec_str;
    cout<<"The final string after concatenation is : "<<endl<<str;
}

void copy_string(string str,string &target)
{
    target = str;
    cout << "Copied String is = " << target << endl;
}

void reverse_string(string &str)
{
    int start = 0;
    int end = str.length() - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed String is = " << str << endl;
}
int main()
{
    int choice;
    string str,sec_str,target;

    cout<<"Enter a string : ";
    getline(cin,str);

    do
    {
        cout<<"\n------------------------------------------------"<<endl;
        cout<<"            String management system"<<endl;
        cout<<"------------------------------------------------"<<endl;

        cout<<"Main Menu : "<<endl;
        cout<<"1. Find Length of the string ."<<endl;
        cout<<"2. Concatenate a new string ."<<endl;
        cout<<"3. Copy string to a new variable ."<<endl;
        cout<<"4. reverse a string ."<<endl;
        cout<<"5. Exit "<<endl;

        cout<<"Enter your choice (1-5)";
        cin>>choice;
        cin.ignore();

        switch(choice)
        {
            case 1 :
            {
                find_length(str);
                break;
            }
            case 2 :
            {
                cout<<"Enter the second string to be added at the end of first string : ";
                getline(cin,sec_str);
                to_concatenate(str,sec_str);
                break;
            }
            case 3 :
            {
                copy_string(str,target);
                break;
            }
            case 4:
            {
                reverse_string(str);
                break;
            }
            case 5 :
            {
                cout<<"Exiting..."<<endl;
                break;
            }
            default :
            {
                cout<<"Invalid option ! choose option b/w 1 to 5 only ..."<<endl;
            }
        }

    }while(choice!=5);

    return 0 ;
}
