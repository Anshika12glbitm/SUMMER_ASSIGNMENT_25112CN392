// Write a program to Count even and odd elements.

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

void countEvenOdd(int arr[], int size)
{
    int evenCount = 0;
    int oddCount = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else 
        {
            oddCount++;
        }
    }

    cout << "\n--- Results ---" << endl;
    cout << "Total Even elements = " << evenCount << endl;
    cout << "Total Odd elements  = " << oddCount << endl;
}

int main()
{
    int size;
    cout<<"Enter the size of an array = ";
    cin>>size;

    int arr[size];
    inputArray(arr,size);
    countEvenOdd(arr, size);

    return 0;
}