//WAP a add two numbers and  add them using the pointers and take input and directly store in the address
#include<stdio.h>
int main(){
    int x, y;
    int *xptr = &x;
    int *yptr = &y;
    printf("Enter the value of x\n");
    scanf("%d", xptr);
    printf("Enter the value of y\n");
    scanf("%d", yptr);
    int sum = *xptr + *yptr;
    printf("The sum of the variables is %d", sum);
    return 0;
}
