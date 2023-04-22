#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define    no_rows_1       3
#define    no_column_1     4
#define    no_column_2     3             // no of columns of first matrix must be equal to no of rows of second matrix for multipication of matrix to exist
#define    no_rows_2       4

int main()
{
    int matrix_1[no_rows_1][no_column_1],matrix_2[no_rows_2][no_column_2],matrix_3[no_rows_1][no_column_2],count,row,column,sum,i;  //declaration and  m x n martrix multiplied by n x r matrix gives m x r matrix
    sum = 0;
    for (count = 0; count < 2; count++)
    {
        printf("Please enter your(in a single line with spaces between the each entry) ");
        if (count == 0)
        {
            printf("first matrix:\n");
            for (row = 1; row <= no_rows_1; row++)
            {
                for ( column = 1; column <= no_column_1; column++)
                {
                    scanf("%d",&matrix_1[row - 1][column - 1]);              // input of the two D array
                }
            }
        }
        else
        {
            printf("second matrix:\n");
            for (row = 1; row <= no_rows_2; row++)
            {
                for ( column = 1; column <= no_column_2; column++)
                {
                    scanf("%d",&matrix_2[row - 1][column - 1]);
                }
            }
        }
    }
    for (row = 1; row <= no_rows_1; row++)
    {
        for ( column = 1; column <= no_column_2; column++)
        {
            for (i = 0; i < no_column_1; i++)
            {
                sum += matrix_1[row - 1][i]*matrix_2[i][column - 1];          // matrix multiplication
            }
            matrix_3[row - 1][column - 1] = sum;
            sum = 0;
        }
    }
    printf("The first input matrix is:\n");
    for (row = 1; row <= no_rows_1; row++)
    {
        for ( column = 1; column <= no_column_1; column++)                  // printing the input
        {
            printf("%4d ",matrix_1[row - 1][column - 1]);
        }
        printf("\n");
    }
    printf("The second input matrix is:\n");
    for (row = 1; row <= no_rows_2; row++)
    {
        for ( column = 1; column <= no_column_2; column++)
        {
            printf("%4d ",matrix_2[row - 1][column - 1]);
        }
        printf("\n");
    }
    printf("The product of 2 given matrices is:\n");
    for (row = 1; row <= no_rows_1; row++)
    {
        for ( column = 1; column <= no_column_2; column++)
        {
            printf("%4d ",matrix_3[row - 1][column - 1]);            // printing the output
        }
        printf("\n");
    }
}