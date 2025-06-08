#include <stdio.h>

#define LEN 5

int main() {
    int a[LEN] = {5, 4, 3, 2, 1};
    int temp;
    int *ptr = a; //this will give the address of the first element of the array to the pointer 

    //bubble sort algorithm
    for (int i = 1; i < LEN; i++) {
        for (int j = 0; j < LEN - i; j++) {
            // Access elements using pointer arithmetic instead of array indexing
            if (*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Print sorted array using pointer
    for (int i = 0; i < LEN; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
