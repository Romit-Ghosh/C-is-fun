#include <stdio.h>
void main()
{
    int n, temp, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    n *= n;

    if (n > 0)
    {
        r = n % 10;
    }
    if (r == temp)
    {
        printf("It is an automorphic number");
    }
    else
        printf("It is not an automorphic number");
}