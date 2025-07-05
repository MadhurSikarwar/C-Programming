#include<stdio.h>
int add(int *,int *); //function declaration written here 
int main(){
    int n1 , n2;
    printf("Enter values of n1 and n2:");
    scanf("%d%d",&n1,&n2);
    int sum = add(&n1,&n2); //passing the address of the numbers here
    printf("The sum of %d and %d is %d",n1,n2,sum);
}
int add(int *p1,int *p2){
    return *p1 + *p2; //referencing the pointers and adding them to return the sum of the numbers
}