// strong number]
// 145 = 1! +4! + 5! = 1+(4*3*2*1)+(5*4*3*2*1)= 1+24+120=145

#include<iostream>
using namespace std;
int main()
{
    int num,last_digit;
    cout<<"Enter a number = ";
    cin>>num;
    
    int sum=0;

    int original_num = num;

    while(num>0)
    {
        int fact=1;
        last_digit= num%10;

        for(int i=1;i<=last_digit;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        num=num/10;
    }

    if(sum == original_num)
    {
        cout<<original_num<<" is a strong number .";
    }
    else 
    {
        cout<<original_num<<" is not a strong number.";
    }
    return 0 ;

}