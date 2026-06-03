#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number = ";
    cin>>num;

    if(num<=1)
    {
        cout<<"Not a prime number .";
        return 0;
    }

    else
    {
        for(int i =2; i<=sqrt(num); i++)
        {
            if(num%i==0)
            count =1;
            break;
        }
    }

    if(count==0)
    cout<<"Prime number";

    else
    cout<<"Not a prime number";

    return 0 ;
}
