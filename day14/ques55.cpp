//Write a program to Second largest element

// Write a program to find the Second Largest element.

#include<iostream>
#include<climits> // Needed for INT_MIN
using namespace std;

void inputArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "] = ";
        cin >> arr[i];
    }
}

int findSecondLargest(int arr[], int size)
{
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest; 
            largest = arr[i];        
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];  
        }
    }
    
    return secondLargest;
}

int main()
{
    int size, result;
    cout << "Enter the size of array = ";
    cin >> size;

    if (size < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 0;
    }

    int arr[size];
    inputArray(arr, size);

    result = findSecondLargest(arr, size);

    if (result == INT_MIN)
    {
        cout << "There is no second largest element (all elements might be identical)." << endl;
    } 
    else 
    {
        cout << "The second largest element is: " << result << endl;
    }
    
    return 0;
}
