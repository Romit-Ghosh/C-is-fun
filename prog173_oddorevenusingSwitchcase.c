#include <stdio.h>
void main()
{
    int n;
    printf("enter number from 1 to 10 :");
    scanf("%d", &n);
    switch (n%2)
    {
    case 0:
        printf("even");
        break;
    default:
        printf("odd");
        break;
    }
}