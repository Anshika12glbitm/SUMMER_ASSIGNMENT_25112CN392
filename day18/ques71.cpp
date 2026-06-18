//Write a program to Binary search.

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
int binary_search(int arr[],int size,int target)
{
    int high,low,mid;
    low=0;
    high=size-1;
    mid=(low+high)/2;

    while(low<=high)// 1 5 7 9 34 
    {// mid=2==7
        if(arr[mid]<target)//7<9
        {
            low=mid+1;
        }
        else if (arr[mid]==target)
        {
            return mid;
        }
        else//target = 5
        {
            high=mid-1;
        }
    }
    if(low>high)
    cout<<target<<" is not found ."<<endl;
}
int main()
{
    int size,target;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    input_array(arr,size);

    cout<<"Enter the target element to be searched = ";
    cin>>target;

    int position =binary_search(arr,size,target);
    cout<<target<<" is located at "<<position+1<<"position in the given array";
    return 0;
}