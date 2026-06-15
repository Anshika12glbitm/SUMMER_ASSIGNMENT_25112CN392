//Write a program to Move zeroes to end.

#include<iostream>
using namespace std;
void input_array(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<"Element ["<<i<<"] = ";
        cin>>arr[i];
    }
}
void move_zero(int arr[],int size)
{
    int i =-1;
    for(int j =0;j<size;j++)
    {
        if (arr[j]==0)
        {
            i=j;
            break;
        }
    }

    if(i==-1) return ;

    for(int k=i+1;k<size;k++)
    {
        if(arr[k]!=arr[i])
        {
            swap(arr[k],arr[i]);
            i++;
        }
    }
}
void print_array(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array= ";
    cin>>size;
    int arr[size];
    input_array(arr,size);

    move_zero(arr,size);

    cout<<"The array with zeroes at the end = "<<endl;
    print_array(arr,size);
}