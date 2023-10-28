#include <stdio.h>

int main()
{
    int sum = 0;
    int num;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < 0)
        {
            printf("You entered a negative number. Loop terminated.\n");
            break;
        }

        if (num > 100)
        {
            printf("Number %d is greater than 100. Not added to the sum.\n", num);
            continue;
        }

        sum += num;
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
