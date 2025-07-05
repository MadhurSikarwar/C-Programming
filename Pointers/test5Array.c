//write a program to display elements of a array using pointers
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *basearr = &arr[0];
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *basearr++);
    }
    return 0;
}
