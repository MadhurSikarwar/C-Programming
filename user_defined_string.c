#include<stdio.h>
#include<string.h>
// int string_length(char str[]) {
//     // Function to calculate the length of a string
//     int length = 0;
//     while (str[length] != '\0') {
//         length++;
//     }
//     return length;
// }
// int strlen1(char str[]) {
//     char ch;
//     int i = 0,c=0;
//     ch = str[0];
//     while (ch != '\0'){
//         c++;
//         ch = str[++i];
//     }
//     return c;
// }
// // char* str_cpy(char str1[],char str2[],int n) {
// //     for(int i=0;i<n;i++) {
//         str1[i] = str2[i];
//     }
//     str1[n] = '\0';
//     return str1[];
// }
void concat(char str1[], char str2[]) {
    // Function to concatenate two strings
    for(int i = 0; str1[i] != '\0'; i++);
    {
        str1[i] = ' ';
        i++;
        for (int j = 0; str2[j] != '\0'; j++, i++) {
            str1[i] = str2[j];
        }
        str1[i] = '\0'; // Null-terminate the concatenated string
    }
}
  
int main(){
    // printf("%d\n",string_length("RVCE"));
    // printf("%d",strlen1("Bhavya"));
    // return 0;
    // char str1[] = "RVCE";
    // char str2[] = "College";
    // str_cpy(str1, str2,2);
    // printf("%s\n", str_cpy(str1, str2, 2));/

    char str1[100]="Bhavya", str2[100]="RVCE";
}

// user defined string functions homework to be made till upcoming wednesday
// string length 
// string copy 
// string append 
// string concatenate
// string ncopy
// string nconcatenate
