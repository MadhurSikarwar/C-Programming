#include <stdio.h>
#include <string.h>

// Define structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to display student details (takes struct by value)
void displayStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student st;

    // Input from user
    printf("Enter name: ");
    fgets(st.name, sizeof(st.name), stdin);
    int len = strlen(st.name);
    if (st.name[len - 1] == '\n') {
        st.name[len - 1] = '\0'; // remove newline
    }

    printf("Enter roll number: ");
    scanf("%d", &st.roll);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Passing structure by value to function
    displayStudent(st);

    return 0;
}
