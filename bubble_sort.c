#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at index %d: ", i, "\n");
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    // the code for bubble sort
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d  ", arr[i]);
            }
            printf("\n");
            // ye wala dry run ka code hai jab poora j ka loop ek baar exit ho gaya hai
            // agar swap hote huye bhi dekhna hai to j ke for loop ke andar hi rakhna padega
            //  printf("printing after %d ",i , "\n");
            //  printf("\n");
            //  for (int k = 0; k < n; k++){
            //      printf("%d  ", arr[k]);
            //  }
            //  printf("\n");
        }
    }

    // printing the final sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}