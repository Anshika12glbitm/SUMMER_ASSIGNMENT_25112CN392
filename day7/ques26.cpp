// recursive fibonacci

#include <iostream>
using namespace std;
int fib(int num) 
{
    if (num == 0 || num == 1) 
    {
        return num;
    }
    else 
    {
        return (fib(num - 1) + fib(num - 2));
    }
}

int main() 
{
    int num;
    cout << "Enter no. of terms" << endl;
    cin >> num;

    cout << "Fibonacci series: ";
    
    for (int i = 0; i < num; i++) 
    {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}
