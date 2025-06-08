#include<stdio.h>
int main(){
    int n;
    printf("Enter the order of the square matrix\n");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j)
            arr[i][j] = 0;
            else if(j<i)
            arr[i][j] = -1;
            else 
            arr[i][j] = 1;
        }
    }
    //printing the whole matrix 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}