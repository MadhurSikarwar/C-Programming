#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array\n");
    for(int i=0;i<n;i++){
        printf("Enter the element at index %d:",i,"\n");
        scanf("%d",&arr[i]);
    }
    //printing the elements of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    //entering the element whose repeatition to be counted
    int count=0;
    printf("Enter the element you want to count in the array\n");
    int element;
    scanf("%d",&element);
    for(int i = 0; i < n; i++)
    {
        if(element == arr[i])
        count++;
    }
    printf("The number of time %d is repeated in the array is:%d",element,count);
    return 0;
}
