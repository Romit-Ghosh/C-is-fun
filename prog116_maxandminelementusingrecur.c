#include <stdio.h>

int findMax(int[], int);
int findMin(int[], int);

void main()
{
    int a[100], n;
    printf("Enter total elements in the array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = findMax(a, n);
    int min = findMin(a, n);
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
}

int findMax(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int max = findMax(a, n - 1);
        if (a[n - 1] > max)
            return a[n - 1];
        else
            return max;
    }
}

int findMin(int a[], int n)
{
    if (n == 0)
        return 0;
    else
    {
        int min = findMin(a, n - 1);
        if (a[n - 1] < min)
            return a[n - 1];
        else
            return min;
    }
}