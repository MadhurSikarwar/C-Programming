#include<stdio.h>
int gcd(int num1,int num2){
    int rem;
    rem = num1%num2;
    if(rem == 0)
        return num2;
    else
        return gcd(num2,rem);
}
int main(){
    int num1 = 12;
    int num2 = 16;
    int max = (num1>num2)?num1:num2;
    int min = (num1<num2)?num1:num2;
    printf("%d",gcd(max,min));
}   