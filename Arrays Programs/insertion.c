#include <stdio.h>
int main() {
    int arr[100];
    int len;
    
    printf("Enter the length of the array\n");
    scanf("%d", &len);
    
    if (len < 100) {
        printf("Enter the elements in the array\n");
        for (int i = 0; i < len; i++) {
            printf("Enter the element at index %d: ", i);
            scanf("%d", &arr[i]);
        }
        
        int val, index;
        printf("Enter the value you want to insert in the array\n");
        scanf("%d", &val);
        printf("Enter the index you want to insert the element\n");
        scanf("%d", &index);
        
        if (index < 0 || index > len) {
            printf("Invalid index!\n");
            return 1; //if I will return 1 I will exit the program as default is return 0
        }

        
        for (int i = len; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = val;
        
        len = len+1;
        
        printf("Updated array: ");
        for (int i = 0; i < len; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    } 
    else {
        printf("Enter length less than 100\n");
    }

    return 0;
}
