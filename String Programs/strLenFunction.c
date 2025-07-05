#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string\n");
    fgets(str,sizeof(str),stdin);
    int len = 0; //for counting the length of the string 
    int i = 0;
    while(str[i] != '\0'){
        len = len+1;
        i = i+1;
    } 
    //the length will be one more than the actual length as it counting the null character also
    //thats why we will subtract one from the length after calculating the final length 
    printf("The length of the string is : %d \n",(len-1)); 
    //the inibuilt function will also include the '\0' ig w
    printf("The length of the string when checked using the inbuilt function is %d",strlen(str));
}