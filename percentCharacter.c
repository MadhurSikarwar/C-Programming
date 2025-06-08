#include<stdio.h>
int main()
{
    /* %d	int (signed decimal)	42	Most common for integers
    %i	int (signed integer)	-10	Similar to %d, but detects base (e.g., 010 is treated as octal)
    %u	unsigned int	100	For non-negative integers
    %o	unsigned int (octal)	012	Displays value in octal
    %x	unsigned int (hexadecimal lowercase)	0x1a	Displays value in hexadecimal (lowercase)
    %X	unsigned int (hexadecimal uppercase)	0x1A	Displays value in hexadecimal (uppercase)*/
    // Integer types
    int a = 10;
    unsigned int b = 250;

    // Floating-point types
    float pi = 3.14159;
    double e = 2.71828;

    // Character and string types
    char ch = 'A';
    char str[20];

    // Octal and hexadecimal values
    int octal = 010;      // Octal value for 8
    int hex = 0x1A;       // Hexadecimal value for 26

    // Pointers
    int *ptr = &a;

    // Input Section
    printf("Enter a string: ");
    scanf("%s", str); // Reading a string input

    // Output Section
    printf("\n--- OUTPUT ---\n");

    // Integer formats
    printf("Integer (%%d): %d\n", a);
    printf("Unsigned Integer (%%u): %u\n", b);

    // Floating-point formats
    printf("Float (%%f): %.2f\n", pi);
    printf("Scientific Notation (%%e): %.2e\n", e);
    printf("Compact Float (%%g): %g\n", pi);

    // Character and String formats
    printf("Character (%%c): %c\n", ch);
    printf("String (%%s): %s\n", str);

    // Octal and Hexadecimal formats
    printf("Octal (%%o): %o\n", octal);
    printf("Hexadecimal (%%x): %x\n", hex);
    printf("Hexadecimal (%%X): %X\n", hex);

    // Pointer format
    printf("Pointer Address (%%p): %p\n", (void*)ptr);

    // Printing the percentage symbol itself
    printf("Percentage Symbol (%%%%): %%\n");

    return 0;
}