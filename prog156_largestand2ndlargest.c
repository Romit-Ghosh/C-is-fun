#include <stdio.h>

void findDiff(int arr[], int n)
{
    int largest = *arr;
    int secondLargest = *arr;

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > largest)
        {
            secondLargest = largest;
            largest = *(arr + i);
        }
        else if (*(arr + i) > secondLargest)
        {
            secondLargest = *(arr + i);
        }
    }

    printf("Difference between the largest and second largest element: %d\n", largest - secondLargest);
}

void main()
{
    int arr[10];
    printf("Enter elements in the array : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    findDiff(arr, 10);
}
