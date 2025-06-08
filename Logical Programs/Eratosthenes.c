#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the limit till which you want to generate prime numbers: ");
    scanf("%d", &n);

    bool isPrime[n+1]; //creating an array with n+1 indexes to count all numbers inside

    // Initialize all entries as true
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true; //first setting all of the array values to true
    }

    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime and hence marking them false
    //main code logic
    for (int i = 2; i <= sqrt(n); i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d is a prime number\n", i);
        }
    }

    return 0;
}
