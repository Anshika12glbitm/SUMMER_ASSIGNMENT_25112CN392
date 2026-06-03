#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,original_num,n,start,end,last_digit;
    cout<<"Enter the starting number of the range = ";
    cin>>start;
    cout<<"Enter the ending number of the range = ";
    cin>>end;

    cout<<"Armstrong numbers from "<<start<<" to "<<end<<" are :"<<endl;

    for(int i=start;i<=end;i++)
    {

        num=i;
        n=i;
        original_num=i;

        int sum=0;
        int count=0;

        while(num!=0)
        {
            num=num/10;
            count++;
        }

        while(n!=0)
        {
            last_digit = n%10;
            sum = sum+ round(pow(last_digit,count));
            n=n/10;
        }

        if(original_num == sum)
        {
            cout<<original_num<<"  ";
        }
    }
}