#include<iostream>
using namespace std;

int sum(int num_1,int num_2)
{
    return num_1 + num_2;
}

int main()
{
    int num_1,num_2;
    cout<<"Enter the first number = ";
    cin>>num_1;
    cout<<"Enter the second number = ";
    cin>>num_2;

    cout<<"The sum of "<<num_1<<" and "<<num_2<<" is : "<<sum(num_1,num_2);
    return 0 ;
}