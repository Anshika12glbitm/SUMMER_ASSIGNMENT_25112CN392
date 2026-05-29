// product of digits

#include<iostream>
using namespace std;
int product_digit(int num)
{
    int product = 1;
    while(num>0)
    {
        product = product * (num%10);
        num=num/10; 
    }
    return product;
}
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;

    cout<<"The product of digits of "<<num<<" = "<<product_digit(num);
    return 0 ;
}