// Recursive function to reverse a number using recursion

#include <iostream>
using namespace std;
int reverse(int x, int y) 
{
    if (x == 0) 
    {
        return y;
    }
    else 
    {
        return reverse(x / 10, y * 10 + x % 10);
    }
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversedNum = reverse(num, 0);

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
