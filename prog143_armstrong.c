#include <stdio.h>
void main()
{
    int n, r, s = 0, temp;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    for (int i = 1; n; i++)
    {
        if (n > 0)
        {
            r = n % 10;
            s = s + r * r * r;
            n = n / 10;
        }
    }
    if (s == temp)
    {
        printf("It is amstrong number ");
    }
    else
        printf("Not an amstrong number");
}