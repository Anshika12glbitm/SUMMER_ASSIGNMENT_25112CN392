#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number = ";
    cin>>num;

    int original_num = num;
    while(num>0)
    {
      count= count+(num&1);  
      num=num>>1;
    }

    cout<<"The set bits in "<<original_num<<" is "<<count;
    return 0 ;
}