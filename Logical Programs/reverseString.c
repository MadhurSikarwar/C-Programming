#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter a string to reverse\n");
    char str[20];
    scanf("%s",&str);
    //code for reversing the string 
    char rev[20];
    int len = strlen(str);
    for(int i=len-1;i>=0;i--){
        rev[i] = str[len-1-i]; //for appending the string 
    }
    rev[len] = '\0'; //last character of the string to be a null character
    printf("%s",rev);
    return 0 ;
}