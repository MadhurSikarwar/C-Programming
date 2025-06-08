#include <stdio.h>
#include <string.h>

int main() {
    int i = 0;
    char ch;
    char str1[20];
    char str2[20];
    char str3[20];

    printf("Enter string 1 (no spaces):\n");
    scanf("%s", str1); // reads only till space (it will read only one word of the sentence)
    getchar(); // to consume the leftover newline from scanf
    printf("You entered string 1: %s\n", str1);

    printf("Enter string 2 (can have spaces):\n");
    gets(str2); // reads full line including spaces (but unsafe)
    printf("You entered string 2: %s\n", str2);

    printf("Enter string 3 (type characters and end with '*'):\n");
    ch = getchar(); // read first character
    while (ch != '*') {
        str3[i] = ch;
        i++;
        ch = getchar(); // read next character
    }
    str3[i] = '\0'; // null-terminate the string
    printf("You entered string 3: %s\n", str3);

    return 0;
}
