// sum of digits

#include <iostream>
using namespace std ;
int sumOfDigits(int num) 
{
    if (num < 10) 
    {
        return num;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits: " << sumOfDigits(number) << std::endl;

    return 0;
}
