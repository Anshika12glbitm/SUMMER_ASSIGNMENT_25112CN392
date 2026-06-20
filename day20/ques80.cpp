//Write a program to Find column-wise sum.

#include<iostream>
using namespace std;
void input_matrix(int matrix[][100],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Element ("<<i+1<<","<<j+1<<") = ";
            cin>>matrix[i][j];
        }
    }
}
void calculate_column_sum(int matrix[][100],int rows,int column)
{
    for(int i=0;i<column;i++)
    {
        int sum=0;
        for(int j=0;j<rows;j++)
        {
            sum = sum + matrix[j][i];
        }
        cout<<" The sum of elements of column "<<i+1<<" is = "<<sum<<endl;
    }
}
int main()
{
    int rows,column;
    cout<<"Enter the details of the matrix = "<<endl;

    cout<<"Rows : ";
    cin>>rows;

    cout<<"Column : ";
    cin>>column;

    int matrix[100][100];
    input_matrix(matrix,rows,column);

    calculate_column_sum(matrix,rows,column);
}    