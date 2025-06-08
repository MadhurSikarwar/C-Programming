#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower()

void toLowerCase(char str[]) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]); // converts uppercase to lowercase
    }
}

void bubbleSort(char str[]) {
    int n = strlen(str);
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(str[j] > str[j + 1]) {
                // swap
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    toLowerCase(str1);
    toLowerCase(str2);

    bubbleSort(str1);
    bubbleSort(str2);

    if(strcmp(str1, str2) == 0) {
        printf("Anagram!\n");
    } else {
        printf("Not an anagram.\n");
    }

    return 0;
}
