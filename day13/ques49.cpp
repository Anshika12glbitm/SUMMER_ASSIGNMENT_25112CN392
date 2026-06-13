//Write a program to Input and display array.

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

void displayArray (int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int arr[size];

    inputArray(arr,size);

    displayArray(arr,size);

    return 0;
}