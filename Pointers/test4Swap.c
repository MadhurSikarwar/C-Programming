//Program for swapping two variables using function 
#include<stdio.h>
//we will have to implement call by reference method type to swap the variables as we are sending the addresses of the variable as the parameters inside of the function
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 12;
    int b = 14;
    printf("Value of a before swapping is %d\n",a);
    printf("Value of b before swapping is %d\n",b);
    swap(&a,&b); //passiong the address of the variables a and b inside the function swap
    printf("Value of a after swapping is %d\n",a);
    printf("Value of b after swapping is %d\n",b); 
}