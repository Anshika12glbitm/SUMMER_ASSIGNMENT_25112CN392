//Write a program to Find row-wise sum.

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
void calculate_row_sum(int matrix[][100],int rows,int column)
{
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<column;j++)
        {
            sum = sum + matrix[i][j];
        }
        cout<< "sum of elements of row"<<i+1<<" = "<<sum<<endl;
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

    calculate_row_sum(matrix,rows,column);
    return 0;
}