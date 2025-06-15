#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];
    char newStr[100]; // For storing the new concatenated string

    printf("Enter the string 1\n");
    scanf("%s", str1); // Takes only one word

    printf("Enter the string 2\n");
    scanf("%s", str2);

    int i = 0, j = 0;

    // Copy str1 to newStr
    for (i = 0; str1[i] != '\0'; i++) {
        newStr[i] = str1[i];
    }

    // Append str2 to newStr
    for (j = 0; str2[j] != '\0'; j++) {
        newStr[i + j] = str2[j];
    }

    newStr[i + j] = '\0'; // Add null terminator at the end

    printf("The concatenated string is %s\n", newStr);
    return 0;
}
