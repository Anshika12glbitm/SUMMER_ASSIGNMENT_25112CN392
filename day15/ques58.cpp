//Write a program to Rotate array left.

#include<iostream>
#include<vector>
using namespace std;

void inputArray(vector<int>&arr,int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<"Element ["<<i<<"] = ";
        cin>>arr[i];
    }
}

void rotateArray(vector<int> &arr,int size,int K)
{
    while(K!=0)
    {
        K--;
        int temp=arr[0];
        for(int i =1;i<size;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[size-1]=temp;
    }
}

void printArray(vector<int> &arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    vector<int> arr(size);
    int K;
    cout<<"places the array is to be shited = ";
    cin>>K;

    inputArray(arr,size);

    rotateArray(arr,size,K);

    cout<<"The left rotated array by k palces = "<<endl;

    printArray(arr,size);
}