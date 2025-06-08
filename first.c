#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the value a\n");
    scanf("%d",&a); //memory address of a (& points to the address of a)
    printf("Enter the value b\n");
    scanf("%d",&b); //memory address of b (& points to the address of b)
    int sum = a+b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    fflush(stdout);
    return 0;
    
}