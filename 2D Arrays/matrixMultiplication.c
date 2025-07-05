#include <stdio.h>
int main()
{
    int row1, col1, row2, col2;
    printf("Enter value of row 1 and col 1\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter value of row 2 and col 2\n");
    scanf("%d%d", &row2, &col2);
    if (col1 == row2)
    {
        int arr1[row1][col1];
        int arr2[row2][col2];
        int ans[row1][col2];
        printf("Enter the elements in the first matrix\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter the element at index [%d][%d]: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter the elements in the second matrix\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Enter the element at index [%d][%d]: ", i, j);  
                scanf("%d", &arr2[i][j]);
            }
        }
        // code for multiplication for 2 matrices
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                ans[i][j] = 0; // Initialize all the result element to 0 first
                for (int k = 0; k < row2; k++)
                {
                    ans[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        // displaying the final multiplied answer matrix
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++) 
            {
                printf("%d\t", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication not possible\n");
    }
}