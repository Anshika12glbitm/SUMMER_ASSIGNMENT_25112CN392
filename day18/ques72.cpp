//Write a program to Sort array in descending order.

#include<iostream>
using namespace std;
void input_array(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Element "<<i<<" = ";
        cin>>array[i];
    }
}
void sort_descending(int array[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Ente the size of the array = ";
    cin>>size;

    int array[size];
    cout<<"Enter the array elements = "<<endl;
    input_array (array,size);

    int sorted_array[size];
    sort_descending(array,size);

    cout<<"The sorted array in descending order = "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}