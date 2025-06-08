#include <stdio.h>
int main() {
    int n, row, col;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    // Initialize all elements to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    for (row = 0; row < n; row++) {
        arr[row][0] = 1;  // First element in each row is 1
        for (col = 1; col <= row; col++) {
            arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
        }
    }

    printf("*****************************************************\n");

    // Print the Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
