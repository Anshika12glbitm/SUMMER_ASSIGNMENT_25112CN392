//Write a program to Rotate array right.

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

void rotate_array(vector<int> &arr, int size, int k)
{
    while(k!=0)
    {
        k--;
        int temp = arr[size-1];
        for(int i=size-2;i>=0;i--){
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
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

    rotate_array(arr,size,K);

    cout<<"The right rotated array by k palces = "<<endl;

    printArray(arr,size);
}