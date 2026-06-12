// Write a program to Write function for Fibonacci.

#include<iostream>
using namespace std;

void fibonacci(int term)
{
    int term_1=0, term_2 = 1 , next=0;

    cout<<"Fibonacci series "<<endl;

    for(int i =1 ; i<=term;i++)
    {
        if(i==1)
        cout<<term_1<<" ";

        if(i==2)
        cout<<term_2<<" ";

            next=term_1+term_2;
            term_1=term_2;
            term_2=next;

            cout<<next<<" ";
    }
}
int main()
{
    int terms ;
    cout<<"Enter the number of terms to be printed = ";
    cin>>terms;

    fibonacci(terms);
}