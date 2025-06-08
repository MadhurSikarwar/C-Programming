#include<stdio.h>
int main()
{
    //a program to demonstrate pointers 
    int y = 5;
    int *x = &y;
    //original address of the variable printed here
    printf("%d\n",x);
    //pointer airthmatic being shown here 
    //each time when decremented it is decreased by 4(which is the size of int datatype)
    x--;
    x--;
    // &b will point to a address that is stored in the pointer 
    printf("%d\n",x);
    int b = 10;
    int *a = &b;
    printf("%d\n",*a); //will printed the value of b which is 10
    printf("%d\n",a); //will print the address of the b in which 10 is stored
    printf("%d\n",&b); //same output as the a (as a = &b) address will be only printed here
    //trying out const pointers 
    int pi = 3.14159;
    int const *address = &pi;
    printf("%d\n",address);
    address--; //the address of the pointer can change but not the value inside the variable 
    // the address is not constant but the the value pointer is pointing to is constant
    printf("%d",address); //it will decrement the pointer value by 4(int datatype used)
    // *address = 3; this would give an error as we are changing the value of the number pointer is pointing into
    // printf("%d",pi); 
    //printing the address of the array 
    printf("\n************************************\n");
    int marks[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        int *arr_add = &marks[i];
        printf("%p\n",arr_add);
        // agar arr_add dala hai to address print hoga
        // agar *arr_add dala hai to address pe jo number hai wo print hoga
        
    }
    
    return 0;
}