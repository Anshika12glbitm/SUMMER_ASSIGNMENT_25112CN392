//Write a program to Print number pyramid.
//    1 2 3 4 5 6 7 8 9 
// 1  _ _ _ _ 1 _ _ _ _ 
// 2  _ _ _ 1 2 1 _ _ _ 
// 3  _ _ 1 2 3 2 1 _ _ 
// 4  _ 1 2 3 4 3 2 1 _ 
// 5  1 2 3 4 5 4 3 2 1 


#include<iostream>
using namespace std;
int main()
{
    int i ,space , num_1,num_2, size;
    cout<<"Enter the size - ";
    cin>>size;//size =5

    for(i=1;i<=size;i++)
    {
        for(space=1;space<=size-i;space++)
        {
            cout<<"  ";
        }
        for(num_1=1; num_1<=i; num_1++)
        {
            cout<<num_1<<" ";
        }
        for(num_2=i-1 ; num_2>=1; num_2--)
        {
            cout<<num_2<<" ";
        }
        cout<<endl;
    }
    return 0;

}