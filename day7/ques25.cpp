//factorial of a number using recursive function
#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num * factorial(num-1);
}
int main()
{
    int num;
    cout<<"Enter a number = ";
    cin>>num;

    cout<<"The factorial of "<<num<<" is "<<factorial(num);
    return 0 ;
}