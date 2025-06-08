#include<stdio.h>
#include<string.h>
int main(){
    // in C string is not treated as a seperate datatype but as an array of character datatype
    char str[20]; //a string has to be preinitialized with its length in C 
    char str1[20] = "this is a string";
    //--->checking length of str1 using strlen function
    int len = strlen(str1);
    printf("%d\n",len);
    //--->strcpy(a,b) copies b to a 
    char a[20] = "hello";
    char b[20] = "bye";
    printf("%s\n",a); //it will print hello
    //after copying
    strcpy(a,b);
    printf("%s\n",a); //it will print bye
    // ||y strncpy will copy n characters of b to a 
    //--->strcat(a1,b1) concatanates b1 to a1 at the end of a1
    char x[10] = "Madhur ";
    char y[10] = "Sikarwar";
    printf("%s\n",strcat(x,y)); //printing the contcatanated string "Madhur Sikarwar to be printed"
    // ||y strncat will concatanate n characters of the string ahead to the string previous of it 
    // --->strcmp(a2,b2) string.compare function
    // this will work as same in java string.compareTo() function
    // --> checks for the unequal characters in the two strings 
    // where the first unequality occurs it will subtract the ASCII values of both the strings (string 1-string 2) (a2-b2) first unequal character 
    char a2[20] = "Phone";
    char b2[20] = "Phome";
    int compare1 = strcmp(a2,b2);
    printf("%d\n",compare1); //it will print 1 as difference between n and m is 1 
    int compare2 = strcmp(b2,a2);
    printf("%d\n",compare2);//if reverse it will print -1
    // if both the strings are equal it will return 0
    // for equal string the condition can be used as if(strcmp(a,b) == 0)
    //--->strncmp function will compare these the strings till n characters strcmp(a,b,n) a and b are the string and n is the number of characters 
    strrchr() will give the occurance of the character inside of the string 
}
