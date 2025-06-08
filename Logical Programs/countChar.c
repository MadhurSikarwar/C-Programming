#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Enter a sentence\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("%s", str);
    int space = 0, vowel = 0, consonant = 0, digit = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == ' ')
        {
            space++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowel++;
            else
            {
                consonant++;
            }
        }
        else if (isdigit(ch))
        {
            digit++;
        }
    }
    printf("Number of whitespace: %d\n", space);
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant);
    printf("Number of digits: %d\n", digit);
}