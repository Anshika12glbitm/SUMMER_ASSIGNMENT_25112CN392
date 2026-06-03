// prime numbers in a range

#include<iostream>
using namespace std;
int main()
{
    int start , end;
    
    cout<<"Enter the starting range = ";
    cin>>start;

    cout<<"Enter the ending range = ";
    cin>>end;

    cout<<"Prime Numbers between "<<start<<" and "<<end<<" are : "<<endl;

    for(int num= start ; num<=end ; num++)
    {
        if(num<=1)
        continue;

        int isNotPrime =0;

        for(int i = 2; i<num;i++)
        {
            if(num%i==0)
            {
              isNotPrime=1;
              break;  
            }
        }

        if(isNotPrime==0)
        cout<<num<<" ";
    }

    cout<<endl;
}