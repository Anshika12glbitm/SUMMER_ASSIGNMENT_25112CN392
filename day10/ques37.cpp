// Write a program to Print star pyramid.
//  1 2 3 4 5 6 7 8 9
// 1         *
// 2       * * *
// 3     * * * * *
// 4   * * * * * * *
// 5 * * * * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int i , j , size;
    cout<<"Enter the size = ";
    cin>>size;

    for(i=1 ; i<=size;i++)
    {
        for(j=1;j<=size-i ; j++)
        {
            cout<<"  ";
        }
        for(int k =1 ; k<=(2*i)-1;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0 ;
}
