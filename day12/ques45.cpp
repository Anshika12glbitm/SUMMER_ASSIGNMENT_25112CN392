//Write a program to Write function for palindrome.

#include<iostream>
using namespace std;
void isNumPalindrome(int num)
{
    if (num<=0)
    {
        cout<<num<<" is not a palindrome number";
        return ;
    }

    int reversedNum = 0;
    int originalNum=num;
    while(num>0)
    {
        int lastDigit = num%10;
        reversedNum = (reversedNum*10)+lastDigit;
        num=num/10;
    }
    if (originalNum == reversedNum)
    {
        cout<<originalNum<<" is a palindrome number .";
    }
    else
    {
        cout<<originalNum<<" is not  a palindrome number.";
    }

}
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    
    isNumPalindrome(num);
}