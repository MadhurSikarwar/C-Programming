#include <stdio.h>
int compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; // Characters don't match
        }
        str1++;
        str2++;
    }
    // Check if both strings ended at the same time
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; // Strings are equal
    } else {
        return 0; // One string is longer than the other
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters that fgets may include
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') str1[i] = '\0';
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') str2[i] = '\0';
        i++;
    }

    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
