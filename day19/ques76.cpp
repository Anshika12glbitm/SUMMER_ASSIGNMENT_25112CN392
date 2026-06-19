//Write a program to Find diagonal sum.

#include<iostream>
using namespace std;
void input_matrix(int matrix[][100],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout<<"Element ("<<i+1<<","<<j+1<<") = ";
            cin>>matrix[i][j];
        }
    }
}    
int primary_diagonal_sum(int matrix[][100],int rows)
{
    int primary_sum=0;
    for(int i=0;i<rows;i++)
    {
        primary_sum = primary_sum+  matrix[i][i];
    }
    return primary_sum;
}
int secondary_diagonal_sum(int matrix[][100],int rows)
{
    int secondary_sum=0;
    for(int i=0;i<rows;i++)
    {
        secondary_sum = secondary_sum+  matrix[i][rows-1-i];
    }
    return secondary_sum;
}
int main()
{
    int row,column;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>column;

    
    if(row==column)
    {
        int matrix[100][100];
        input_matrix(matrix,row);

        int primary_sum=primary_diagonal_sum(matrix,row);
        cout<<"the sum of primary diagonal elements is = "<<primary_sum<<endl;
        int secondary_sum= secondary_diagonal_sum(matrix,row);
        cout<<"The sum of secondary diagonal elements is= "<<secondary_sum<<endl;
    }
    else
    {
        cout<<"the diagonal sum is not possible";
    }

    return 0;
}