//code for different ways of initializing values in a 2 dimensional array 
#include<stdio.h>
int main(){
    //1st method where no need of seperating the rows
    int arr1[2][3] = {1,2,3,4,5,6};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //2nd method where rows can be seperated
    int arr2[2][3] = {{10,11,12},{13,14,15}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    //3rd method for making array to set all of its values to 0 at once
    int arr3[2][3] = {0};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }   
    printf("\n\n"); 
    //4th method where no need of writing rows (identidy by itself)
    int arr4[][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr4[i][j]);
        }
        printf("\n");
    }

    return 0;
}