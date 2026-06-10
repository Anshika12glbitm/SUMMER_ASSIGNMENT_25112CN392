//Write a program to Print character pyramid.
//   1 2 3 4 5 6 7 8 9
// 1 _ _ _ _ A _ _ _ _
// 2 _ _ _ A B A _ _ _
// 3 _ _ A B C B A _ _
// 4 _ A B C D C B A _
// 5 A B C D E D C B A

#include<iostream>
using namespace std;
int main()
{
    int i ,space , char_1,char_2, size;
    cout<<"Enter the size - ";
    cin>>size;//size =5

    for(i=1;i<=size;i++)
    {
        for(space=1;space<=size-i;space++)
        {
            cout<<"  ";
        }
        for(char_1=1; char_1<=i; char_1++)
        {
            cout<<(char)(64+char_1)<<" ";
        }
        for(char_2=i-1 ; char_2>=1; char_2--)
        {
            cout<<(char)(64+char_2)<<" ";
        }
        cout<<endl;
    }
    return 0;

}