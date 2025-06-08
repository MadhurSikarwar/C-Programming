#include<stdio.h>
#include<math.h>
int sum(int n){
    int s=0;
    while(n!=0){
        int rem = n%10;
        s+=rem;
        n=n/10;
    }
    return s;
}
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    num = abs(num);
    int s = sum(num);
    while(s>9){
        s = sum(s);
    }
    printf("\nfinal sum in single digit is: %d",s);
}