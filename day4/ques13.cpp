// 0,1,1,2,3,5.8.13,21.....
// Fibonacci series 
#include<iostream>
using namespace std;
int main()
{
    int terms ,first =0 , second =1,next;
    cout<<"Enter the number of terms = ";
    cin>>terms;

    for(int i =1;i<=terms;i++)
    {
        cout<<first<<" ";
        next = first + second;
        first = second;
        second =  next;
    }
    return 0 ;
}