#include <stdio.h>
int main()
{
    int a[10], n, i, j, temp;
    printf("\n Enter the size of n:\n");
    scanf("%d", &n);
    printf("\n Enter the array elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i < n; i++) /* ith smallest number bubbles up to its
           right spot in ith iteration */

    {
        for (j = 0; j < n - i; j++) /* bubbling starts from the "deepest numbers"

                 and proceeds upwards */
            /* element at jth position is "lighter" than the one on top,
            therefore jth element bubbles up */
            if (a[j] >= a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    printf("\n The sorted array is: \n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}