#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
//creating a function for checking factorial
int factorial(int n){
    int fact = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        for(int i=2;i<=n;i++){
            fact = fact*i;
        }
        return fact;
    }
} 
//creating a boolean function for checking strong number
bool strong(int num){
    int tempNum = num;
    num = abs(num);
    int sum = 0;
    while (num!=0)
    {
        int rem = num%10;
        sum = sum + factorial(rem);
        num = num/10;
    }
    if(tempNum == sum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int start,end;
    printf("Enter the starting range of the numbers\n");
    scanf("%d",&start);
    printf("Enter the ending range of the numbers\n");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        if(strong(i)){
            printf("%d is a strong number\n",i);
        }
    }
}