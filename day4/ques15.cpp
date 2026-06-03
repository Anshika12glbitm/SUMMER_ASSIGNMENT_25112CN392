#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,num,count =0,sum=0,last_digit,original_num;
    cout<<"Enter a number = ";
    cin>>num;

    n=num;
    original_num= num;

    //first we will count the digits in a number
    while(num!=0)
    {
        num=num/10;
        count = count +1;
    }

    while(n!=0)
    {
        last_digit = n %10;
        sum = sum + round(pow(last_digit,count));
        n = n/10;
    }

    if(sum == original_num)
    {
        cout<<original_num<<" is an armstrong number .";
    }
    else
    {
        cout<<original_num<<" is not an armstrong number .";
    }
    return 0 ;
}