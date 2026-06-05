//perfect numbers 
//6=1+2+3=6
//28=1+2+4+7+14

#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"Enter a  number = ";
    cin>>num;

    for(i=1;i<=num/2 ; i++)
    {
        if(num%i == 0)
        {
            sum= sum +i;
        }
    }

    if(sum == num)
    {
        cout<<num<<" is a perfect Number . ";
    }
    else
    {
        cout<<num<<" is not a perfect number . ";
    }
    return 0 ;
}