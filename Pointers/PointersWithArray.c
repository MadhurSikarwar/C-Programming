#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // declated an array with length 5 and hard coded values
    //printing arr to get the base address array
    printf("The base address using arr is %lu\n",arr);
    //printing &arr[0] to get the base address array 
    printf("The base address using &arr[0] is %lu\n",&arr[0]);
    //printing &arr to get the base address of the array
    printf("The base address using &arr is %lu\n",&arr);
    int array[] = {10,9,8,7,6,5,4,3,2,1}; //declaring an array for hit and trial 
    int *ptr = array; //initializing the pointer with base address of the array[]
    printf("%d",*(ptr+1));
    printf("\n*********************************************************\n");
    //“In pointer arithmetic, if I increase the pointer by x, then the address actually increases by x * sizeof(datatype) so that it points to the correct next element.”
    //program to traverse a array using pointer 
    int arr1[] = {4,5,6,7};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    int *base = arr1; //made the pointer with the base address of the arr1 
    for(int i=0;i<len;i++){
        //printing the elements of the array
        printf("%d\t",*(base+i));
    }
    printf("\n");
    //printing 
    printf("%d\t%d",arr1[0],0[arr1]); 
}