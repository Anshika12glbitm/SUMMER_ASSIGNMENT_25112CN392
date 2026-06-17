//Write a program to Intersection of arrays.

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
int intersection_of_array(int array_1[],int array_2[],int intersection_array[],int size_1,int size_2,int size)
{
    int i=0,j=0,k=0;

    while(i<size_1 && j<size_2)
    {
        if(array_1[i]==array_2[j])
        {
            intersection_array[k]=array_1[i];
            i++;
            j++;
            k++;
        }

        else if(array_1[i]<array_2[j])
        {
            i++;     
        }

        else
        {
            j++;
        }
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
    int size = (size_1<size_2)?size_1:size_2;
    int intersection_array[size],index;

    cout<<"Enter the elments of array 1"<<endl;
    inputArray(array_1,size_1);

    cout<<"Enter the elements of array 2"<<endl;
    inputArray(array_2,size_2);

    index = intersection_of_array(array_1,array_2,intersection_array,size_1,size_2,size);

    cout<<"The intersection array = "<<endl;

    if(index==0)
    {
        cout<<"No common elements found .";
    }
    else
    {
        for(int i=0;i<index;i++)
        {
        cout<<intersection_array[i]<<" ";
        }
    }

    return 0;
}