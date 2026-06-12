//Write a program to Write function for perfect number.

#include<iostream>
using namespace std;

void isPerfectNumber(int num)
{
    int sum=0;
    int original_num=num;

    for(int i =1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==original_num)
    {
        cout<<original_num <<" is a perfect number .";
    }
    else
    {
        cout<<original_num<<" is not a perfect number .";
    }
}
int main()
{
    int num ;
    cout<<"Enter a number = ";
    cin>>num;

    isPerfectNumber(num);
}