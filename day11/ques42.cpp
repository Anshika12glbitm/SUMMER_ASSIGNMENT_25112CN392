#include<iostream>
using namespace std;

int findmax(int num_1,int num_2)
{
    if(num_1>num_2)
    return num_1;
    else
    return num_2;
}
int main()
{
    int num_1,num_2;
    cout<<"Enter the first number = ";
    cin>>num_1;
    cout<<"Enter the second number  = ";
    cin>>num_2;

    cout<<"The maximum out of "<<num_1<<" and "<<num_2<<" is :" << findmax(num_1,num_2)<<endl;

    return 0;
}