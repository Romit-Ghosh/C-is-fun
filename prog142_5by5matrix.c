#include <stdio.h>

int main()
{
    int matrix[5][5];
    int i, j;

    // Fill upper triangle with 1 and diagonal with 0
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (i == j)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = 1;
            }
        }
    }

    // Fill lower triangle with 2
    for (i = 1; i < 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            matrix[i][j] = 2;
        }
    }

    // Print matrix
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}