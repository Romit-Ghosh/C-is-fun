#include <stdio.h>
void main()
{
    int n;
    char letter = 90;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%c ", letter);
            letter--;
        }
        printf("\n");
    }
}