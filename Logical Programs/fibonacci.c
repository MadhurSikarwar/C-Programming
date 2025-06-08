#include <stdio.h>

void printFibonacciSeries(int n) {
    int a = 0, b = 1, fib;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fib = 0;
        } else if (i == 1) {
            fib = 1;
        } else {
            fib = a + b;
            a = b;
            b = fib;
        }
        printf("Term %d: %d\n", i, fib);
    }
}

int main() {
    int n;
    printf("Enter the number of terms to print in Fibonacci series:\n");
    scanf("%d", &n);

    printFibonacciSeries(n);

    return 0;
}
