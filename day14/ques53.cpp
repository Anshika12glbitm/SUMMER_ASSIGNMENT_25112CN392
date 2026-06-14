// Write a program to Linear search.

#include<iostream>
using namespace std;

void inputArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout << "Element [" << i << "] = ";
        cin >> arr[i];
    }
}

int linearSearch(int target, int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if (target==arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size,target,result;
    cout<<"Enter the size of array = ";
    cin>>size;

    int arr[size];
    inputArray(arr,size);

    cout<<"Enter the element to be located = ";
    cin>>target;

    result = linearSearch(target,arr,size);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    } 
    else 
    {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}
