#include <stdio.h>

void main()
{
    int arr[100];
    int n, i;
    int *ptr = arr; // pointer to the first element of the array
    int largest, smallest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i); // read in each element using pointer arithmetic
    }

    // Initialize the largest and smallest elements to the first element of the array
    largest = smallest = *ptr;

    // Iterate over the remaining elements of the array and update the largest and smallest elements
    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    printf("The difference between the largest and smallest elements is: %d\n", largest - smallest);
}
