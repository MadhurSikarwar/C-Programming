#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Madhur";

    // Method 1: Using printf()
    printf("Using printf(): %s\n", str);

    // Method 2: Using puts()
    printf("Using puts(): ");
    puts(str);  // puts automatically adds a newline

    // Method 3: Using putchar() in a loop
    printf("Using putchar(): ");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    putchar('\n');  // manually add newline

    return 0;
}
