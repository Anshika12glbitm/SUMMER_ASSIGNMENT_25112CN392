// sum if digits of a number
#include<iostream>
using namespace std;
int sum_digit (int num)
{
    int sum =0;
    while(num>0)
    {
        sum=sum+(num%10);
        num=num/10;
    }

    return sum;
}
int main()
{
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    cout<<"The sum of digits of "<<num<<" = "<<sum_digit(num);
    return 0;
}
