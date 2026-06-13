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

void findMaxMin(int arr[], int size)
{
    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "\n--- Results ---" << endl;
    cout << "Largest element  = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;
}

int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int arr[size];

    inputArray(arr, size);
    findMaxMin(arr, size);

    return 0;
}