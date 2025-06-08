#include<stdio.h>
int sum(int n){
    if(n == 0)
        return 0;
    else 
        return ((n) + sum(n-1));
}
int main(){
    int n;
    printf("Enter the n\n");
    scanf("%d",&n);
    printf("%d",sum(n));
}