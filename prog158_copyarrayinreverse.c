#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i, j;

    printf("Original array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    // Copy contents of arr1 to arr2 in reverse order
    for (i = 4, j = 0; i >= 0; i--, j++)
    {
        arr2[j] = arr1[i];
    }

    printf("\nReversed array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
