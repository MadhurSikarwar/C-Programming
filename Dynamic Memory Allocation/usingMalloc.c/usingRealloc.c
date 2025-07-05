#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    // Step 1: Allocate memory using malloc
    int *arr = (int *)malloc(n * sizeof(int));

    // Step 2: Check allocation success
    if (arr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    // Step 3: Input initial elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Step 4: Print original array
    printf("\nOriginal array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 5: Ask for new size
    int newSize;
    printf("\n\nEnter the new size of the array: ");
    scanf("%d", &newSize);

    // Step 6: Reallocate memory
    int *temp = (int *)realloc(arr, newSize * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);  // Free old memory just in case
        return 1;
    }
    arr = temp;  // Assign resized memory back to arr

    // Step 7: Input values for new part (if newSize > n)
    if (newSize > n) {
        for (int i = n; i < newSize; i++) {
            printf("Enter new element %d: ", i);
            scanf("%d", &arr[i]);
        }
    }

    // Step 8: Print final array
    printf("\nFinal array:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // Step 9: Free memory
    free(arr);

    return 0;
}
