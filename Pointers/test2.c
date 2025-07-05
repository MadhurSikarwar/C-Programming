#include<stdio.h>
int main(){
    //address value of the register variable cannot be requested as it is stored in the CPU register and not allocated the ram device 
    // register int x =12;
    // printf("%d",&x);
    int x = 10;
    int *xptr = &x; //the star is used for declaring the pointer variable 
    //this will store the address of the variable x 
    printf("Address of x printing using directly the &x :%llu\n",&x); 
    printf("Address of x printing using the variable xptr :%llu\n",xptr); 
    *xptr = 20; //changing the value directly in the address with using *xptr
    //printing the value of x using the  *xptr variable 
    printf("printing the changed value of x = %d",*xptr);
}