#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];  // string for storing the name of the student
    int roll;       // for storing the roll number of the student
    float percentage;  // for storing the percentage of the student
};

int main() {
    struct Student s1, s2;  // declaring the variables 

    // directly hard coding the values into the variables in the struct 
    strcpy(s1.name, "Madhur");  // to use strcpy function for initializing the string
    s1.roll = 63;
    s1.percentage = 94.3f;

    // taking user input values for s2
    printf("Enter the name of student 2:\n");
    scanf("%s", s2.name);  
    printf("Enter the roll number for student 2:\n");
    scanf("%d", &s2.roll);  
    printf("Enter the percentage of student 2:\n");
    scanf("%f", &s2.percentage);  

    // printing the values of both the structures
    printf("\nPrinting the values of student 1:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll number: %d\n", s1.roll);
    printf("Percentage: %.2f%%\n", s1.percentage); //used format specifiers 

    printf("\nPrinting the values of student 2:\n");
    printf("Name: %s\n", s2.name);
    printf("Roll number: %d\n", s2.roll);
    printf("Percentage: %.2f%%\n", s2.percentage); //used format specifiers 

    return 0;
}
