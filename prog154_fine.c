#include <stdio.h>
void main()
{
    int n;
    printf("Enter no of days late :");
    scanf("%d", &n);

    switch (n)
    {
    case 1 ... 5:
        printf("Your fine is of half rupee");
        break;
    case 6 ... 10:
        printf("Your fine is of one rupee");
        break;
    case 11 ... 29:
        printf("Your fine is 5 rupees");
        break;
    default:
        // if (n >= 30)
        printf("Your membership is cancelled");
    }
}