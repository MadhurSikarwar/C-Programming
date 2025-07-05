#include<stdio.h>
int main() {
    int x=12;
    printf("The address of the variable in integer value is %d",&x);    
    printf("\n");
    printf("The address of the varaible in the long long unsignhed %llu",&x); //llu meaning the long long unsigned integer 
    printf("\nThe address of the pointer in hexadecimal is %p",&x);
    return 0;
}