#include<iostream>
using namespace std;
int main()
{
    int n, first_term =0 , second_term = 1, nth_term =0;

    cout<<"Enter the position = ";
    cin>>n;

    if(n==1)
    {
        nth_term = first_term;
    }

    else if (n==2)
    {
        nth_term = second_term;
    }

    else
    {
        for(int i=3 ; i<=n ;i++)
        {
            nth_term = first_term + second_term ;
            first_term = second_term;
            second_term = nth_term;
        }
    }


    cout<<"The "<<n<<"th term of fibonacci series is : "<<nth_term;

    return 0 ;
}