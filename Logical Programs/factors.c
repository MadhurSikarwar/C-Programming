#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of which you want to print the factors of\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            printf("%d is a factor of %d \n",i,n);
        }
    } 

    //prime factorization method here
}