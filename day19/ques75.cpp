//Write a program to Transpose matrix.

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
void transpose(int matrix[][100],int transpose_matrix[][100],int rows,int column)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            transpose_matrix[j][i]=matrix[i][j];
        }
    }
}
void display_result(int transpose_matrix[][100],int rows,int column)
{
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<transpose_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int rows,column;
    cout<<"Enter the rows of the matrix  = ";
    cin>>rows;

    cout<<"Enter the columns of the matrix = ";
    cin>>column;

    int matrix[100][100];
    input_matrix(matrix,rows,column);

    int transpose_matrix[100][100];
    transpose(matrix,transpose_matrix,rows,column);

    
    cout<<"The transpose matrix of the given matrix is = "<<endl;
    display_result(transpose_matrix,rows,column);
}