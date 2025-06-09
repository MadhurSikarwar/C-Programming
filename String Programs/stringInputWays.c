#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100], str4[100];

    // Method 1: Using scanf (reads until whitespace)
    printf("Enter a string (scanf, stops at space): ");
    scanf("%99s", str1);
    getchar(); // clear newline from buffer

    // Method 2: Using gets (deprecated and unsafe)
    printf("Enter a string (gets, reads until newline): ");
    gets(str2); // use only for learning; avoid in real code

    // Method 3: Using fgets (safe and preferred)
    printf("Enter a string (fgets, reads until newline): ");
    fgets(str3, sizeof(str3), stdin);

    // Remove trailing newline from fgets
    size_t len = strlen(str3);
    if (len > 0 && str3[len - 1] == '\n') {
        str3[len - 1] = '\0';
    }

    // Method 4: Using getchar() in a loop, ends on '*'
    printf("Enter a string (getchar, ends on '*'): ");
    int i = 0;
    char ch;
    while ((ch = getchar()) != '*' && i < sizeof(str4) - 1) {
        str4[i++] = ch;
    }
    str4[i] = '\0'; // null-terminate the string or else it will remain as a array of characters

    // Printing all strings
    printf("\nYou entered (scanf): %s\n", str1);
    printf("You entered (gets): %s\n", str2);
    printf("You entered (fgets): %s\n", str3);
    printf("You entered (getchar loop): %s\n", str4);

    return 0;
}
