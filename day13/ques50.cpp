//Write a program to Find sum and average of array.

#include<iostream>
using namespace std;

void inputArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" Element ["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
}

int sumArray(int arr[], int size)
{
    int sum=0;
    for(int i=0 ;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int averageArray (int sum, int size)
{
    int average = sum / size;
    return average;
}

int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];

    inputArray(arr,size);

    int sum = sumArray(arr,size);
    cout<<"The sum of array elements is "<<sum<<endl;

    int average = averageArray(sum,size);
    cout<<"the Average of array elements is "<<average;

    return 0;
}