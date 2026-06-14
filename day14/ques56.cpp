//Write a program to Find duplicates in array.

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

void findDuplicates(int arr[], int size)
{
    bool hasDuplicates = false;
    
    // Array to track if an element at an index has already been printed as a duplicate
    bool visited[size] = {false}; 

    cout << "Duplicate elements are: ";
    
    for(int i = 0; i < size; i++)
    {
        if (visited[i] == true) {
            continue;
        }

        bool isDuplicate = false;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                isDuplicate = true;
                visited[j] = true;
            }
        }

        if(isDuplicate)
        {
            cout << arr[i] << " ";
            hasDuplicates = true;
        }
    }

    if (!hasDuplicates)
    {
        cout << "None";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of array = ";
    cin >> size;

    if (size < 2) {
        cout << "No duplicates possible in an array smaller than 2 elements." << endl;
        return 0;
    }

    int arr[size];
    inputArray(arr, size);

    findDuplicates(arr, size);
    
    return 0;
}