// Write a program to Print reverse pyramid.
//   
//   1 2 3 4 5 6 7 8 9
// 1 * * * * * * * * *
// 2   * * * * * * *
// 3     * * * * *
// 4       * * *
// 5         *


#include<iostream>
using namespace std;
int main()
{
    int i,j,k,size;
    cout<<"Enter the size : ";
    cin>>size;

    for(i=size;i>=1;i--)
    {
        for(j=0;j<size-i;j++) //for spaces
        {
            cout<<"  ";
        }
        for(k=1;k<=(2*i)-1;k++) //for star
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}