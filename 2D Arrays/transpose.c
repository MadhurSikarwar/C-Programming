#include<stdio.h>
int main(){ 
    int row,col;
    printf("Enter row of the matrix\n");
    scanf("%d",&row);
    printf("Enter columns of the matirx\n");
    scanf("%d",&col);
    int arr[row][col];
    int transpose[col][row];
    printf("Enter the elements of the array\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the element at index [%d][%d] \n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //code for transposing the matrix
    printf("\n************************************************\n");
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            transpose[i][j] = arr[j][i];
        }
    }
    //code for printing for the transposed and original matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n************************************************\n");

    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    
}