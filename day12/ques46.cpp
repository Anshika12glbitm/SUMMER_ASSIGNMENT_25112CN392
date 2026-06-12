//Write a program to Write function for Armstrong.

#include<iostream>
#include<cmath>
using namespace std;

void isNumArmstrong(int num)
{
    int tempNum = num, originalNum = num, count = 0;
    int result = 0; 

    // Count number of digits
    while(tempNum > 0)
    {
        count++;
        tempNum = tempNum / 10;
    }

    tempNum = originalNum; 

    while(tempNum > 0)
    {
        result = result + round(pow((tempNum % 10), count)); 
        tempNum = tempNum / 10;
    }

    // Check and print result
    if (originalNum == result)
    {
        cout << originalNum << " is an armstrong number." << endl; // Fixed: count to cout
    }
    else 
    {
        cout << originalNum << " is not an armstrong number." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;
    isNumArmstrong(num);
    return 0;
}
