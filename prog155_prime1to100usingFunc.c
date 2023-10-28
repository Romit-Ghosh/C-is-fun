#include <stdio.h>

void printPrimes()
{
    int i = 2;

    do
    {
        int j = 2;
        int isPrime = 1;

        do
        {
            if (i % j == 0 && i != j)
            {
                isPrime = 0;
                break;
            }
            j++;
        } while (j <= i / 2);

        if (isPrime == 1)
        {
            printf("%d ", i);
        }

        i++;
    } while (i <= 100);

    printf("\n");
}

int main()
{
    printPrimes();
    return 0;
}
