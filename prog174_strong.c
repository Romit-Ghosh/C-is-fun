#include <stdio.h>
int function();
void main()
{
    int m, n, i, sum = 0;
    printf("Enter the value :");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0)
    {
        m = temp % 10;
        int fact = 1;
        for (i = 1; i <= m; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("The number is Strong");
    }
    else
    {
        printf("The number is not Strong");
    }
}