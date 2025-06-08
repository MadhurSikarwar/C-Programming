#include <stdio.h>
#include <string.h>
// Define the structure
struct student {
    char usn[20];
    char name[50];
    int m1;
    int m2;
};

// Global structure variable
struct student globalStudent = {"1RV24IS067", "Madhur Sikarwar", 85, 90};

// Function to display student details
void display(struct student s) {
    printf("\n--- Student Details ---\n");
    printf("USN     : %s\n", s.usn);
    printf("Name    : %s\n", s.name);
    printf("Marks 1 : %d\n", s.m1);
    printf("Marks 2 : %d\n", s.m2);
}

int main() {
    // Local structure variable
    struct student localStudent;

    // Taking user input for local student
    printf("Enter USN for local student: ");
    scanf("%s", localStudent.usn);
    printf("Enter Name for local student: ");
    scanf(" %[^\n]", localStudent.name);  // Accepts string with spaces
    printf("Enter Marks 1: ");
    scanf("%d", &localStudent.m1);
    printf("Enter Marks 2: ");
    scanf("%d", &localStudent.m2);

    // Display both students
    printf("\n--- Displaying Global Student ---");
    display(globalStudent);

    printf("\n--- Displaying Local Student ---");
    display(localStudent);

    return 0;
}
