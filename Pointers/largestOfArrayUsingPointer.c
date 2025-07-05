#include <stdio.h>
int main()
{
    // I will try making pointer of the greatest variable and then store it in the variable address
    int len;
    printf("Enter the length of the array\n");
    scanf("%d", &len);
    int arr[len];
    /*different ways for storing the base address of array into a variable
     int *base = arr;
     int *base = &arr;
     int *base = &arr[0];
    */
    int *base = arr;
    for (int i = 0; i < len; i++)
    {
        printf("Enter the element at index %d: ", i);
        scanf("%d", (base + i));
    }
    int max = arr[0];
    int *pmax = &max;
    for (int i = 1; i < len; i++)
    {
        if(arr[i]>*pmax)
        *pmax = *(base+i);
    }
    printf("The greatest element in the array is %d",*pmax);

}