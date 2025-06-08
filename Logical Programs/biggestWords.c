#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char word[100];         // Temporary word holder
    char largest[100];      // Stores the biggest word
    int maxLen = 0;
    int k = 0;

    printf("Enter a sentence to find the biggest word:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline from fgets

    int len = strlen(str);
    for (int i = 0; i <= len; i++) {
        char ch = str[i];

        // If character is not whitespace and not end of string, build the word
        if (!isspace(ch) && ch != '\0') {
            word[k++] = ch;
        } else {
            if (k > 0) {
                word[k] = '\0'; // Null-terminate current word

                if (strlen(word) > maxLen) {
                    maxLen = strlen(word);
                    strcpy(largest, word); // Copy current word to largest
                }

                k = 0; // Reset index for next word
            }
        }
    }

    printf("The biggest word is: '%s' (Length: %d)\n", largest, maxLen);

    return 0;
}
