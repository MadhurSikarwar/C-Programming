#include <stdio.h>
int max(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }
    else if (arr[len - 1] > max(arr, len - 1))
    {
        return arr[len - 1];
    }
    else
    {
        return max(arr, len - 1);
    }
}

int main()
{
    int n;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element at the index %d\n ", i);
        scanf("%d", &arr[i]);
    }
    printf("The max of the array is %d ", max(arr, n));
}