#include <stdio.h>
#include <string.h>

struct DOB {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int age;
    struct DOB date_of_birth;
};

int main() {
    int len;
    printf("Enter the number of employees:\n");
    scanf("%d", &len);

    struct Employee arr[len];

    for (int i = 0; i < len; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);

        // Clear input buffer before fgets
        getchar(); // this removes the newline left after scanf

        printf("Name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);

        // Remove trailing newline if exists
        int ln = strlen(arr[i].name);
        if (arr[i].name[ln - 1] == '\n') {
            arr[i].name[ln - 1] = '\0';
        }

        printf("Age: ");
        scanf("%d", &arr[i].age);

        printf("Date of Birth (dd mm yyyy): ");
        scanf("%d %d %d", &arr[i].date_of_birth.day,
                         &arr[i].date_of_birth.month,
                         &arr[i].date_of_birth.year);
    }

    // Output all employee details
    printf("\n===== Employee Records =====\n");
    for (int i = 0; i < len; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("DOB: %02d-%02d-%04d\n",
               arr[i].date_of_birth.day,
               arr[i].date_of_birth.month,
               arr[i].date_of_birth.year);
    }

    return 0;
}
