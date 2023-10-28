#include <stdio.h>

void array_sum(int [], int, int *);

void main()
{
    int arr[100], n, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    array_sum(arr, n, &sum);

    printf("The sum of all the elements in the array is: %d\n", sum);
}

void array_sum(int arr[], int n, int *sum)
{
    for (int i = 0; i < n; i++)
    {
        *sum += arr[i];
    }
}
