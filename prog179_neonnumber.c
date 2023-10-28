#include <stdio.h>
void main()
{
    int n, sum = 0, temp, r;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    n = n * n;
    for (int i = 1; n; i++)
    {
        if (n > 0)
        {
            r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
    }
    if (sum == temp)
    {
        printf("It is a Neon number :)");
    }
    else
    {
        printf("It is not a Neon number :(");
    }
}