#include <stdio.h>
void main()
{
    int i, j, n, a[100];

    printf("Enter the total number of Elements :");
    scanf("%d", &n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        j = 0;
        a[i + j];
        {
            if (a[i + j] % 2 == 0)
            {
                printf("The number is even %d", a[i]);
            }
            else
            {
                printf("The number is odd %d", a[i]);
            }
        }
        j++;
    }
}