#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    int original_num = num;

    for(int i=2;i<=num;i++)
    {
        int largest_prime_factor = i;
        while(num%i == 0)
        {
            num=num/i;
        }
        if(num==1)
        {
            cout<<"the largest prime factor of "<<original_num<<" is : "<<largest_prime_factor;
        }
    }
}