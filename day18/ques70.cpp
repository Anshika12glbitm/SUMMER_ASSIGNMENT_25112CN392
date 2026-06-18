//Write a program to Selection sort.

#include<iostream>
using namespace std;
void input_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Element "<<i<<" = ";
        cin>>arr[i];
    }
}
void selection_sorting(int arr[],int size)
{
    int temp,min_idx;
    for(int i=0;i<size;i++)
    {
        min_idx=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int size;
    cout<<"Ente the size of the array = ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array= ";
    input_array(arr,size); 

    cout<<"Sorted array = ";
    selection_sorting(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}