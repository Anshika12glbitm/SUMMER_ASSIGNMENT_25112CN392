#include<iostream>
using namespace std;
int factorial (int num)
{
    int factorial=1;
    for(int i=1; i<=num ; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<< "Factorial of " << num<< " = "<< factorial(num);
}
