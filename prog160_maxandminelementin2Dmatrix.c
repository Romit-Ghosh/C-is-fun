#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int i, j, matrix[ROWS][COLS];
    int min = matrix[0][0], max = matrix[0][0]; // Initialize min and max with first element

    // Take input from user for the 2-D matrix
    printf("Enter elements of %d x %d matrix:\n", ROWS, COLS);

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);

            // Update min and max if necessary
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    // Print the minimum and maximum values from the matrix
    printf("Minimum value in the matrix is %d\n", min);
    printf("Maximum value in the matrix is %d\n", max);

    return 0;
}
