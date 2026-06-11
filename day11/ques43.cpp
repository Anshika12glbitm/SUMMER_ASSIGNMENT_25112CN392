// Write a program to Write function to check prime.

#include<iostream>
using namespace std;

void prime(int num)
{
    int count =0;
    if(num<=1)
    {
        cout<<num<<" is not a prime number.";
    }
    else
    {
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }

        if(count==0)
        {
            cout<<num<<" is a prime number.";
        }
        else
        {
            cout<<num<<" is not a prime number.";
        }
    }
}

int main()
{
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    prime(num);
    return 0 ;
}