#include<iostream>
using namespace std;

int main()
{
    int num,rev=0;
    cout<<"Enter the number = ";
    cin>>num;

    int original_num=num;

    while(num!=0)
    {
        rev = rev * 10 +(num%10);
        num=num/10;
    }

    if (original_num == rev)
    {
        cout<<original_num<< " is palindrome.";
    }
    else{
        cout<<original_num<<" is not palindrome .";
    }
    return 0 ;
}
