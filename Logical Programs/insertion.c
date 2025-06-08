#include <stdio.h>

int main() {
    int arr[100]; 
    int index, val, n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &index);
    if (index < 0 || index > n) {
        printf("Invalid position!\n");
        return 1;
    }
    printf("Enter val to insert: ");
    scanf("%d", &val);
    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = val;
    n++; 
    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
