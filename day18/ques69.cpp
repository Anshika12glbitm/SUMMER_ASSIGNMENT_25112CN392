//Write a program to Bubble sort.

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
void bubble_sorting(int array[],int size)
{
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
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

    int bubble_sort_array[size];
    bubble_sorting(array,size);

    cout<<"The sorted array = "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}