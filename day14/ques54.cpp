//Write a program to Frequency of an element.

#include<iostream>
using namespace std;

void inputArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "] = ";
        cin >> arr[i];
    }
}

int countFrequency(int target, int arr[], int size)
{
    int count = 0; 
    
    for(int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size, target, frequency;
    cout << "Enter the size of array = ";
    cin >> size;

    int arr[size];
    inputArray(arr, size);

    cout << "Enter the element to find its frequency = ";
    cin >> target;

    frequency = countFrequency(target, arr, size);
    
    if (frequency > 0)
    {
        cout << "The element " << target << " appears " << frequency << " time(s) in the array." << endl;
    } 
    else 
    {
        cout << "The element " << target << " does not exist in the array." << endl;
    }
    
    return 0;
}
