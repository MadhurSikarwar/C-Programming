#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    printf("Enter value of row 1 and col 1\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter value of row 2 and col 2\n");
    scanf("%d%d", &row2, &col2);

    if (row1 == row2 && col1 == col2)
    {
        int arr1[row1][col1];
        int arr2[row2][col2];
        int sum[row1][col1];
        int diff[row1][col1];

        // Filling first matrix
        printf("Enter the elements in the first matrix\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("Enter the element at index [%d][%d]: ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }

        // Filling second matrix
        printf("Enter the elements in the second matrix\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("Enter the element at index [%d][%d]: ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }

        // Addition and subtraction
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
                diff[i][j] = arr1[i][j] - arr2[i][j];
            }
        }

        // Display first matrix
        printf("\nMatrix 1:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("%d\t", arr1[i][j]);
            }
            printf("\n");
        }

        // Display second matrix
        printf("\nMatrix 2:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d\t", arr2[i][j]);
            }
            printf("\n");
        }

        // Display sum matrix
        printf("\nAddition (Matrix 1 + Matrix 2):\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }

        // Display difference matrix
        printf("\nSubtraction (Matrix 1 - Matrix 2):\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                printf("%d\t", diff[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition and subtraction cannot be performed as the number of rows and columns are not the same.\n");
    }

    return 0;
}
