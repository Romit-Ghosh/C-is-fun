#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to check whether a matrix is orthogonal or not
int isOrthogonal(int mat[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int i, j, k, dotProduct;

    // Check if the matrix is square
    if (rows != cols)
    {
        return 0;
    }

    // Check if the columns are orthonormal
    for (i = 0; i < cols; i++)
    {
        for (j = i + 1; j < cols; j++)
        {
            dotProduct = 0;
            for (k = 0; k < rows; k++)
            {
                dotProduct += mat[k][i] * mat[k][j];
            }
            if (dotProduct != 0)
            {
                return 0;
            }
        }
    }

    // If we get here, the matrix is orthogonal
    return 1;
}

// Main function
int main()
{
    int mat[MAX_ROWS][MAX_COLS];
    int rows, cols, i, j;

    // Read in the matrix dimensions
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Read in the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Check if the matrix is orthogonal
    if (isOrthogonal(mat, rows, cols))
    {
        printf("The matrix is orthogonal.\n");
    }
    else
    {
        printf("The matrix is not orthogonal.\n");
    }

    return 0;
}
