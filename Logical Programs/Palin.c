#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[20], rev[20];

    printf("Enter a string to check whether it is a palindrome:\n");
    scanf("%s", str);  // Or use fgets if you want to allow spaces

    int len = strlen(str);

    // Convert to lowercase
    for (int i = 0; i < len; i++) {
        str[i] = tolower(str[i]);
    }

    // Reverse the string
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';  // null terminator

    // Compare
    if (strcmp(str, rev) == 0) {
        printf("The string entered is a palindrome string\n");
    } else {
        printf("The string entered is not a palindrome string\n");
    }

    return 0;
}
