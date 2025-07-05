#include <stdio.h>
int main(){
    int n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int arr[n];
    int i,j,min;
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        printf("Enter the element at the index %d: ",i);
        scanf("%d",&arr[i]);
    }
    //code for selection sort 
    printf("Printing the unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d\t ",arr[i]);
        
    }
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
            if(i!=min){
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
    printf("\nPrinting the sorted array\n");
    for(int i=0;i<n;i++){
        printf("%d\t ",arr[i]);
    }
}