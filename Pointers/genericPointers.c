#include <stdio.h>

int main() {
    int i = 42;
    float f = 3.14f;
    char c = 'A';

    void *ptr;

    // Point to int
    ptr = &i;
    printf("Value of int: %d\n", *(int *)ptr); //(int *) is used to typecast the generic pointer to the int pointer and this can be done similarly for every datatype 

    // Point to float
    ptr = &f;
    printf("Value of float: %.2f\n", *(float *)ptr);

    // Point to char
    ptr = &c;
    printf("Value of char: %c\n", *(char *)ptr);

    // Modifying the values using generic pointer
    ptr = &i;
    *(int *)ptr = 100;
    printf("Modified int: %d\n", i);

    ptr = &f;
    *(float *)ptr = 6.28f;
    printf("Modified float: %.2f\n", f);

    ptr = &c;
    *(char *)ptr = 'Z';
    printf("Modified char: %c\n", c);

    return 0;
}