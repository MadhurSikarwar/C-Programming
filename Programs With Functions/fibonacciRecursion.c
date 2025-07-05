#include<stdio.h>
int fibo(int n){
    if(n == 0){
        return 0; //base case
    }
    else if(n == 1){
        return 1;   //base case
    }
    else{
        return fibo(n-1) + fibo(n-2); //recursive case 
    }
}
int main(){
        //printing the nth term of the fibonacci series 
        printf("%d",fibo(6));
}