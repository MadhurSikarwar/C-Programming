#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    printf("Enter the number of strings: ");
    scanf("%d", &len);

    char str[20][30]; 

    printf("Enter the strings (one per line):\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%s", str[i]);
    }

    printf("\nUnsorted string array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", str[i]);
    }

    char temp[30]; 

    // Bubble sort
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("\nSorted string array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
