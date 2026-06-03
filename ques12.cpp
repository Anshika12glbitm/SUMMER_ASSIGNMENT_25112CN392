#include<iostream>
using namespace std;
int main()
{
    int num_1 , num_2,gcd,lcm;
    cout<<"Enter the first number = ";
    cin>>num_1;
    cout<<"Enter the second number = ";
    cin>>num_2;

    for(int i=1 ; i<=num_1 && i<= num_2 ; i++)
    {
        if(num_1%i ==0 && num_2%i ==0)
        {
            gcd = i;
        }
    }

    lcm = (num_1*num_2)/gcd;

    cout<<lcm<<" is the lcm of "<<num_1<<" and "<<num_2;
    return 0;
}