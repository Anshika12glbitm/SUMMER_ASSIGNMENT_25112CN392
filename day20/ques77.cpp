//multiply matrices

// 1 2 3   1 2 3 
// 4 5 6   4 5 6
#include<iostream>
using namespace std;
void input_matrix(int matrix[][100],int rows , int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<"Element ("<<i<<","<<j<<")  : ";
            cin>>matrix[i][j];
        }
    }
}
void multiply(int matrix_1[][100],int matrix_2[][100],int row_1,int col_2,int col_1,int result_matrix[][100] )
{
    for(int i=0;i<row_1;i++)
    {
        for(int j=0;j<col_2;j++)
        {
            int sum=0;
            for(int k=0;k<col_1;k++)
            {
                sum=sum+ (matrix_1[i][k]*matrix_2[k][j]);
            }
            result_matrix[i][j]=sum;
        }
    }
}
void display_result(int result_matrix[][100],int rows , int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<result_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row_1,col_1,row_2,col_2;

    cout<<"Enter the dimensions of matrix 1 : "<<endl;
    cout<<"Enter the number of rows of matrix 1 = ";
    cin>>row_1;
    cout<<"Enter the number of columns of matrix 1 = ";
    cin>>col_1;

    cout<<"Enter the dimensions of matrix 2 : "<<endl;
    cout<<"Enter the number of rows of matrix 2 = ";
    cin>>row_2;
    cout<<"Enter the number of columns of matrix 2 = ";
    cin>>col_2;    

    if(col_1 == row_2)
    {
        int matrix_1[100][100];
        int matrix_2[100][100];
        int result_matrix[100][100];
        input_matrix(matrix_1,row_1,col_1);
        input_matrix(matrix_2,row_2,col_2);

        multiply(matrix_1,matrix_2,row_1,col_2,col_1,result_matrix);

        cout<<"The product of the two matrices is: "<<endl;
        display_result(result_matrix,row_1,col_2);
         
    }

    else
    {
        cout<<"Error: Matrices cannot be multiplied! Columns of Matrix 1 must equal Rows of Matrix 2.";
    }
    
}