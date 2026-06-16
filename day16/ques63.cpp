//Write a program to Second largest element.

#include<iostream>
using namespace std;
void input_array(int arr[],int size)
{
    for (int i =0;i<size;i++)
    {
        cout<<"Element["<<i<<"] = ";
        cin>>arr[i];
    }
}
int findSecondLargest(int arr[],int size)
{
    int largest,secondLargest;
    largest=arr[0];
    secondLargest =-1;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]<largest)
        {
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    int size;
    cout<<"Enter the size of array = ";
    cin>>size;

    int arr[size];
    input_array(arr,size);
    int result = findSecondLargest(arr,size);
    cout<<"The second largest element in the array is : "<<result;
    return 0;
}