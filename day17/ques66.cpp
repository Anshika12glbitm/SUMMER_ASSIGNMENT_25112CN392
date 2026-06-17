//Write a program to Union of arrays.

#include<iostream>
using namespace std;
void inputArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Element "<<i<<" = ";
        cin>>arr[i];
    }
}
int union_of_array(int array_1[],int array_2[],int union_array[],int size_1,int size_2,int size)
{
    int i=0,j=0,k=0;

    while(i<size_1 && j<size_2)
    {
        if(array_1[i]==array_2[j])
        {
            union_array[k]=array_1[i];
            i++;
            j++;
            k++;
        }

        else if(array_1[i]<array_2[j])
        {
            union_array[k]=array_1[i];
            i++;
            k++;
        }

        else
        {
            union_array[k]=array_2[j];
            j++;
            k++;
        }
    }
    while(i<size_1)
    {
        union_array[k]=array_1[i];
        i++;
        k++;
    }
    while(j<size_2)
    {
        union_array[k]=array_2[j];
        j++;
        k++;
    }
    return k;
}
int main()
{
    int size_1;
    cout<<"Enter the size of array 1 : ";
    cin>>size_1;

    int size_2;
    cout<<"Enter the size of array 2 : ";
    cin>>size_2;

    int array_1[size_1],array_2[size_2];
    int size = size_1+size_2;
    int union_array[size],index;

    cout<<"Enter the elments of array 1"<<endl;
    inputArray(array_1,size_1);

    cout<<"Enter the elements of array 2"<<endl;
    inputArray(array_2,size_2);

    index = union_of_array(array_1,array_2,union_array,size_1,size_2,size);

    cout<<"The union array = "<<endl;
    for(int i=0;i<index;i++)
    {
        cout<<union_array[i]<<" ";
    }
    return 0;
}