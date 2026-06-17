//Write a program to Merge arrays.

#include<iostream>
using namespace std;
void input_array_1(int array_1[],int size_1)
{
    for(int i=0;i<size_1;i++)
    {
        cout<<"Element "<<i<<" = ";
        cin>>array_1[i];
    }
}
void input_array_2(int array_2[],int size_2)
{
    for(int i=0;i<size_2;i++)
    {
        cout<<"Element "<<i<<" = ";
        cin>>array_2[i];
    }
}
void merged_Array(int array_1[],int array_2[],int merged_array[],int size_1,int size_2)
{
    int i=0;
    for( i=0;i<size_1;i++)
    {
        merged_array[i]=array_1[i];
    }

    for(int j=0;j<size_2;j++)
    {
        merged_array[i]=array_2[j];
        i++;
    }
}
int main()
{
    int size_1,size_2;
    cout<<"Enter the size of first array";
    cin>>size_1;
    cout<<"Enter the size of second array";
    cin>>size_2;

    int array_1[size_1],array_2[size_2];
    int size=size_1+size_2;
    int merged_array[size];
    cout<<" Elements of array 1 = "<<endl;
    input_array_1(array_1,size_1);

    cout<<"Elements of array 2 = "<<endl;    
    input_array_2(array_2,size_2);

    merged_Array(array_1,array_2,merged_array,size_1,size_2);

    cout<<"The merged array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<merged_array[i]<<" ";
    }
    return 0;

}