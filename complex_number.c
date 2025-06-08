#include <stdio.h>
#include <math.h>

struct complex_number {
    int real;
    int img;
};

int main() {
    struct complex_number c1, c2;
    
    // Input
    printf("Enter real part of number 1: ");
    scanf("%d", &c1.real);
    printf("Enter imaginary part of number 1: ");
    scanf("%d", &c1.img);
    
    printf("Enter real part of number 2: ");
    scanf("%d", &c2.real);
    printf("Enter imaginary part of number 2: ");
    scanf("%d", &c2.img);

    int choice;
    printf("\nEnter:\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\nChoice: ");
    scanf("%d", &choice);

    int real, img;
    float real4, img4;

    switch (choice) {
        case 1: // Addition
            real = c1.real + c2.real;
            img = c1.img + c2.img;
            printf("Result: %d + i%d\n", real, img);
            break;

        case 2: // Subtraction
            real = c1.real - c2.real;
            img = c1.img - c2.img;
            printf("Result: %d + i%d\n", real, img);
            break;

        case 3: // Multiplication
            real = (c1.real * c2.real) - (c1.img * c2.img);
            img = (c1.real * c2.img) + (c1.img * c2.real);
            printf("Result: %d + i%d\n", real, img);
            break;

        case 4: // Division
            if (c2.real == 0 && c2.img == 0) {
                printf("Division by zero is not allowed.\n");
                break;
            }
            float denominator = pow(c2.real, 2) + pow(c2.img, 2);
            real4 = ((c1.real * c2.real) + (c1.img * c2.img)) / denominator;
            img4 = ((c1.img * c2.real) - (c1.real * c2.img)) / denominator;
            printf("Result: %.2f + i%.2f\n", real4, img4);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            break;
    }

    return 0;
}
