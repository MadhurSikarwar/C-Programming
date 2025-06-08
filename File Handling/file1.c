#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Input from user
    printf("Enter what you want to write inside the file:\n");
    scanf("%s", str);  // use fgets(str, sizeof(str), stdin); for full line

    // Write to file
    fp = fopen("TextFile.txt", "w");  // write mode
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "%s", str);  // safe writing
    fclose(fp);

    // Read from the same file
    fp = fopen("TextFile.txt", "r");  // read mode
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
