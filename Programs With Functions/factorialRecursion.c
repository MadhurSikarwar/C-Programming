#include<stdio.h>
int fact(int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
int main(){
    int num;
    printf("Enter a number to find the factorial of\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,fact(num));
}