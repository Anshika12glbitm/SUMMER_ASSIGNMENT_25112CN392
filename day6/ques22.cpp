#include<iostream>
using namespace std;
int main()
{
    int binary_num,rem;
    cout<<"Enter the binary number : ";
    cin>>binary_num;

    int original_binary_num = binary_num;
    int pow =1,decimal_num=0;

    while(binary_num>0)
    {
        rem=binary_num%10;// 101
        binary_num = binary_num/10;
        decimal_num = decimal_num + (rem*pow);
        pow=pow*2;
    }
    cout<<original_binary_num<<" in decimal number system is "<<decimal_num;

    return 0;
}