#include <stdio.h>
int main()
{
    //this program will find out the second largest number in the array 
    //this program not to get confused between position and index 
    // when position asked add 1 in the index we found 
    int n;
    int arr[] = {81, 23, 45, 67, 89, 12, 34, 56, 78, 90};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int index = 0;
    for(int i=0;i<len;i++){
        if(arr[i]>max){
        max=arr[i];
        index=i;
        }
    }
    printf("The largest number is : %d at index: %d",max,index);
    //code for finding the second largest
    int sec = arr[0];
    int sec_i = 0;
    for(int i=0;i<len;i++){
        if(i != index){
            if(arr[i]>sec){
                sec = arr[i];
                sec_i = i;
            }
        }
        else
        continue;
    }
    printf("\nThe second largest number is: %d at index: %d",sec,sec_i);
    return 0;
}