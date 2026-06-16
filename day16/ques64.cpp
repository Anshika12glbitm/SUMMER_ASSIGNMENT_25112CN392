#include <iostream>
using namespace std;

void inputArray(int arr[], int size) 
{
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void removeDuplicates(int arr[], int &size) 
{
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < size - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                size--; 
                j--;    
            }
        }
    }
}

void printArray(const int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int num;
    
    cout << "Enter the number of elements: ";
    cin >> num;
    
    int arr[100]; 
    
    inputArray(arr, num);
    
    removeDuplicates(arr, num);
    
    cout << "\nAfter deletion of repeated elements: ";
    printArray(arr, num);
    
    return 0;
}
