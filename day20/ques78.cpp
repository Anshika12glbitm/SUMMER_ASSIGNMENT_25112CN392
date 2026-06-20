//Write a program to Check symmetric matrix.

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
int check_symmetric(int matrix[][100],int rows,int column)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(matrix[i][j] != matrix[j][i])
            return 0;

        }
    }
    return 1;
}
int main()
{
    int rows,column;
    cout<<"Enter the rows of the matrix  = ";
    cin>>rows;

    cout<<"Enter the columns of the matrix = ";
    cin>>column;

    if(rows==column)
    {
        int matrix[100][100];
        input_matrix(matrix,rows,column);

        int result = check_symmetric(matrix,rows,column);
        if(result==1)
        {
            cout<<"The given matrix is symmetric . ";
        }
        else{
            cout<<"The given matrix is not symmetric . ";
        }
    }
    return 0;
}    