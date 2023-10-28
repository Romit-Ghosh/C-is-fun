#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    int i;

    // Special case for 1
    if (num == 1)
    {
        return false;
    }

    // Check if num is divisible by any number less than itself
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    // If no factors less than num, it is prime
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call isPrime function and display result
    if (isPrime(num))
    {
        printf("%d is prime\n", num);
    }
    else
    {
        printf("%d is not prime\n", num);
    }

    return 0;
}
