#include <stdio.h>
void main()
{
    int n, s = 0, r, a;
    printf("Enter a number :");
    scanf("%d", &n);
    for (int i = 1; n; i++)
    {
        if (n > 0)
        {
            r = n % 10;
            s = s * 10 + r;
            n = n / 10;
        }
    }
    // printf("%d", s);
    // printf("%d", a);
    for (int i = 1; s; i++)
    {
        switch (s % 10)
        {
        case 0:
            printf("zero\t");
            break;
        case 1:
            printf("one\t");
            break;
        case 2:
            printf("two\t");
            break;
        case 3:
            printf("three\t");
            break;
        case 4:
            printf("four\t");
            break;
        case 5:
            printf("five\t");
            break;
        case 6:
            printf("six\t");
            break;
        case 7:
            printf("seven\t");
            break;
        case 8:
            printf("eight\t");
            break;
        case 9:
            printf("nine\t");
            break;
        case 10:
            printf("ten\t");
            break;
        default:
            printf("error\t");
        }
        s = s / 10;
    }
}