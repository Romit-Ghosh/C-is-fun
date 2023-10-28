#include <stdio.h>

int main()
{
    int i, n, factorial = 1, sum = 0;
    printf("enter  a number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;   // Calculate factorial of i
        sum += factorial; // Add factorial to sum
    }
    printf("%d", factorial);
    printf("Sum of first %d terms of the series is %d\n", n, sum);

    return 0;
}
