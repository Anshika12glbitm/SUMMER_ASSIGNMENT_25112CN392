//Write a program to Find maximum frequency element.

#include<iostream>
using namespace std;
void inputArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Element ["<<i<<"] = ";
        cin>>arr[i];// 1 2 4 1 1
    }
}
int max_freq_element(int arr[],int size)
{
    int maxFreqElement= arr[0];
    int maxCount=0;

    for(int i =0;i<size;i++)
    {
        int currentCount =0;

        for(int j=0;j<size;j++)
        {
            if(arr[j]==arr[i])
            currentCount++;
        }
        if(currentCount>maxCount){
            maxCount=currentCount;
            maxFreqElement=arr[i];
        }
    }

    return maxFreqElement;

}
int main()
{
    int size;
    cout<<"enter the size of an array = ";
    cin>>size;

    int arr[size];
    inputArray(arr,size);
    int highest =max_freq_element(arr,size);

    cout<<"The element in the array with the highest frequency is "<<highest;
    return 0;
}