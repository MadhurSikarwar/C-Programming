#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", arr + i);  // or &arr[i]
    }

    // Print the array
    printf("\nThe elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // or arr[i]
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
