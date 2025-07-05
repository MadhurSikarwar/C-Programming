#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr; // base address of the array

    for (int i = 0; i < 10; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", (ptr + i)); // corrected: removed dereference
    }

    printf("\n");

    int sum = 0;
    // Method 1: safer - don't increment ptr itself
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    float avg = sum / 10.0;  // corrected: avoid integer division

    printf("The average of the numbers in array is %f\n", avg);

    return 0;
}
