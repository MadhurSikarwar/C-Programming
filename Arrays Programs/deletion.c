#include <stdio.h>
int main() {
    int arr[100], len, index;
    printf("Enter the length of the array\n");
    scanf("%d", &len);
    
    printf("Enter the elements of the array\n");
    for (int i = 0; i < len; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the index you want to delete: ");
    scanf("%d", &index);

    if (index >= 0 && index < len) {
        for (int i = index; i < len - 1; i++) {
            arr[i] = arr[i + 1];  // shift left
        }
        len--;  // reduce size

        printf("Array after deletion:\n");
        for (int i = 0; i < len; i++) {
            printf("%d\t", arr[i]);
        }
    } else {
        printf("Invalid index entered\n");
    }

    return 0;
}