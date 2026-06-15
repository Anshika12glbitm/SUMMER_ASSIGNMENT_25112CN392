//Write a program to Reverse array.

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

void reverseArray(int arr[], int size)
{
    int i,start =0, end = size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        end--;
        start++;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    int arr[size];
    inputArray(arr,size);

    reverseArray(arr,size);

    cout<<"Reversed array = "<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
}