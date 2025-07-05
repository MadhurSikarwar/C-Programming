//add two numbers using memory allocation using malloc function 
#include <stdio.h>
#include <stdlib.h>

// Function to add two numbers using pass by reference
void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int *num1, *num2, *result;
    // Allocate memory using malloc
    num1 = (int *)malloc(sizeof(int));
    num2 = (int *)malloc(sizeof(int));
    result = (int *)malloc(sizeof(int));
    // Check if memory allocation was successful
    if (num1 == NULL || num2 == NULL || result == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    // Take input
    printf("Enter first number: ");
    scanf("%d", num1);
    printf("Enter second number: ");
    scanf("%d", num2);
    // Call the function
    addNumbers(num1, num2, result);
    // Print the result
    printf("Sum = %d\n", *result);
    // Free allocated memory
    free(num1);
    free(num2);
    free(result);
    return 0;
}
