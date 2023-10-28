#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(matrix[i][i]))
        {
            frequency++;
        }
    }

    printf("The frequency of prime numbers in the diagonal elements of the matrix is: %d\n", frequency);

    return 0;
}