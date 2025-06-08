#include<stdio.h>
int main(){
    int arr1[100], arr2[100], merge[200];
    int len1, len2;
    printf("Enter length of the first array\n");
    scanf("%d", &len1);
    printf("Enter elements of the first array\n");
    for(int i = 0; i < len1; i++){
        printf("Enter the element at index %d:", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter length of the second array\n");
    scanf("%d", &len2);
    for(int i = 0; i < len2; i++){
        printf("Enter the element at index %d:", i);
        scanf("%d", &arr2[i]);
    }
    printf("\nPrinting the first array\n");
    for(int i = 0; i < len1; i++){
        printf("%d\t", arr1[i]);
    }
    printf("\nPrinting the second array\n");
    for(int i = 0; i < len2; i++){
        printf("%d\t", arr2[i]);
    }
    int finLen = len1 + len2;
    int choice;
    printf("\nEnter 1 for merging the second array after the first\n");
    printf("Enter 2 for merging the first array after the second\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            for(int i = 0; i < len1; i++){
                merge[i] = arr1[i];
            }
            for(int i = len1; i < finLen; i++){
                merge[i] = arr2[i - len1]; //main logic (dusre wali index 0 se shuru honi chaiye)
            }
            printf("\nMerged Array:\n");
            for(int i = 0; i < finLen; i++){
                printf("%d\t", merge[i]);
            }
            break;
        case 2:
            for(int i = 0; i < len2; i++){
                merge[i] = arr2[i];
            }
            for(int i = len2; i < finLen; i++){
                merge[i] = arr1[i - len2]; //main logic to the merging code
            }
            printf("\nMerged Array:\n");
            for(int i = 0; i < finLen; i++){
                printf("%d\t", merge[i]);
            }
            break;
        default:
            printf("Enter 1 or 2 only\n");
    }
    return 0;
}
