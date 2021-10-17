/*Write a program to read a matrix and find sum of all the digits in its main diagonal.*/

#include <stdio.h>
int main()
{
    int mat[100][100];
    int i, j, sum = 0;

    //input the dimensions of matrix
    int m1, n1;
    printf("enter the dimensions of the matrix:\n ");
    scanf("%d%d", &m1, &n1);

    // input elements of matrix 1
    printf("Enter the elements of matrix: \n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (i == j)
            {
                sum = sum + mat[i][j];
            }
        }
    }
    printf("Sum of diagonal is: %d", sum);

    return 0;
}