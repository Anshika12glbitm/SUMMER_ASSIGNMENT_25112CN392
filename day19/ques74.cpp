// Write a program to subtract matrices.

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
void subtract_matrices(int matrix_1[][100],int matrix_2[][100],int row_1,int col_1,int sub_matrix[][100])
{
    for(int i=0;i<row_1;i++)
    {
        for(int j=0;j<col_1;j++)
        {
            sub_matrix[i][j]=matrix_1[i][j]-matrix_2[i][j];
        }
    }
}
void display_result(int sub_matrix[][100],int row_1,int col_1)
{
    for(int i=0;i<row_1;i++)
    {
        for(int j=0;j<col_1;j++)
        {
            cout<<sub_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    int row_1,row_2,col_1,col_2;

    cout<<"Enter the dimensions of matrix 1 :"<<endl;
    cout<<"Number of rows of matrix 1 = ";
    cin>>row_1;
    cout<<"Number of columns of matrix 1 = ";
    cin>>col_1;

    cout<<"Enter the dimensions of matrix 2 :"<<endl;
    cout<<"Number of rows of matrix 2 = ";
    cin>>row_2;
    cout<<"Number of columns of matrix 2 = ";
    cin>>col_2;    

    int matrix_1[100][100];
    int matrix_2[100][100];
    int sub_matrix[100][100];

    if(row_1!=row_2  ||  col_1!=col_2)
    {
        cout<<"Error . Matrix cannot be subtracted . Rows and Columns must be equal"<<endl;
    }

    else
    {
        cout<<"Enter the elements of matrix 1 :"<<endl;
        input_matrix(matrix_1,row_1,col_1);
        cout<<"Enter the elements of matrix 2 :"<<endl;
        input_matrix(matrix_2,row_2,col_2);

        subtract_matrices(matrix_1,matrix_2,row_1,col_1,sub_matrix);

        cout<<"The subracted matrix is : "<<endl;
        display_result(sub_matrix,row_1,col_1);
    }

    return 0;
}