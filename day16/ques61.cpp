//Write a program to Find missing number in array.

#include<iostream>
using namespace std;

void inputArray(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<"Element ["<<i<<"] = ";
        cin>>arr[i];
    }
}
int missingNumber(int arr[],int size)
{
    int minValue=arr[0];
    int maxValue=arr[0];

    for(int i =0;i<size;i++)
    {
        if(arr[i]<minValue)
        minValue=arr[i];
        if(arr[i]>maxValue)
        maxValue=arr[i];
    }

    int expected_count = maxValue-minValue+1;
    int expected_sum=expected_count*(minValue+maxValue)/2;

    int actual_sum=0;
    for(int i=0;i<size;i++)
    {
        actual_sum+=arr[i];
    }

    return expected_sum-actual_sum;
}
int main()
{
    const int maxSize =100;
    int arr[maxSize];
    int size;
    cout<<"Enter the size of an array - ";
    cin>>size;

    inputArray(arr,size);
    int missing = missingNumber(arr,size);
    cout<<"the missing number is : "<<missing;

   return 0;
}
