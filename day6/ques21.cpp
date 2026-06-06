#include<iostream>
using namespace std;
int main()
{
    int decimal_num ,rem;
    cout<<"Enter a decimal number : ";
    cin>>decimal_num;

    int binary_num = 0 , pow=1;
    int original_num = decimal_num;

    while(decimal_num>0)
    {
        rem=decimal_num%2;
        decimal_num=decimal_num/2;
        binary_num=binary_num + (rem*pow);
        pow=pow*10;
    }

    cout<<"The conversion of decimal number : "<<original_num<<" into binary is : "<<binary_num;
}