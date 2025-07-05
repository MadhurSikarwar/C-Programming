#include<stdio.h>
int main(){
    int x = 10;
    int *ptr_x = &x;
    printf("Address of x is %X\n",ptr_x); //for printing the address in hexadecimal form 
    printf("Address of x is %lu\n",ptr_x); //for printing the address in long int form 
    printf("Address of x is %d\n",ptr_x); //for printing the address in int form 
    int y;
    int *ptr_y = &y; //declaring a pointer variable for y 
    *ptr_y = 10; //storing 10 at the address of y 
    printf("value of y is %d\n",y);
    // &y will give the address of the address and *ptr_y will point to the value at that address
    //any number of pointer variables can point to the single same address 
    //program to print Hello World using pointers 
    char *ch = "Hello World"; //here hello world would be stored somewhere in the memory and *ch is pointing to the address of "Hello World"
    printf("%s\n",ch);
    //program to add two floating point numbers using pointers 
    float fnum1 = 10.231 , fnum2 = 121.221;
    float *f1 = &fnum1;
    float *f2 = &fnum2;
    float finalSum = *f1 + *f2;
    printf("The sum of two floating point numbers %f\n",finalSum);
    //convert floating number to integer number 
    float fnum = 12.129141;
    float *pfnum = &fnum;
    int *inum = (int)*pfnum;
    printf("Type casted value of %f in integer is %d\n",fnum,inum);

}