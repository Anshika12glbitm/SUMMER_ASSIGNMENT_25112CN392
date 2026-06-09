//   1 2 3 4 5
// 1 * * * * *
// 2 * * * *
// 3 * * *
// 4 * *
// 5 *
// i+j=6(rows+1)

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the number of rows = ";
    cin>>rows;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=(rows+1)-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}