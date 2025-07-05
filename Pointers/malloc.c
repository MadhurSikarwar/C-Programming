//this is a program for trying out the malloc function in C 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));  // allocates memory for 5 integers

    if(ptr == NULL) {
        printf("Memory not allocated!\n"); //to check if the memory is allocated or not 
        return 1; //return 1 for termination of the program 
    }

    for(int i = 0; i < 5; i++) {
        ptr[i] = i + 1;    //storing natural numbers in the values address
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); //printing the numbers 
    }

    free(ptr);  // always free memory when done
    return 0;
}
