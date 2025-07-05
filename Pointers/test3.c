//WAP = make two variables and add them using the pointers 
#include<stdio.h>
int main(){
    int x = 12;
    int y = 14;
    int *xptr = &x;
    int *yptr = &y;
    int sum = *xptr + *yptr;
    printf("The sum of the variables using the pointers is %d",sum);
}