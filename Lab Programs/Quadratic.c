#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a, b, c, root, disc, root1, root2;
    printf("\nEnter the coefficients:\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0 && c == 0)
    {
        printf("Not Possible\n");
        exit(0);
    }
    else if (a == 0 && b != 0)
    {
        root = -c / b;
        printf("Linear root = % f\n", root);
    }
    else
    {
        disc = b * b - 4 * a * c; // ‘disc’ indicates discriminant
        // Find the distinct roots
        if (disc > 0)
        {
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            printf("\n Roots are real & distinct! \n");
            printf("\n The roots are: \n%f\n%f\n", root1, root2);
        }
        else if (disc == 0) // Find the equal roots
        {
            root1 = root2 = -b / (2 * a);
            printf("\n Roots are real & equal! \n");
            printf("\n The roots are \n%f\n%f\n", root1, root2);
        }
        else
        {
            // Find the complex roots
            root1 = -b / (2 * a);
            root2 = sqrt(abs(disc)) / (2 * a);
            printf("\n The roots are imaginary!\n");
            printf("\n The first root is %f + i%f \n", root1, root2);
            printf("\n The second root is %f - i%f \n", root1, root2);
        }
    }
}
