#include <stdio.h>
void main()
{
    int i, n, m, sum = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        m = n % i;
        if (m == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("The number is perfect");
    }
    else
    {
        printf("The number is not perfect");
    }
}