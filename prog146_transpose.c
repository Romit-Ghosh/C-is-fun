#include <stdio.h>

// #define MAX_ROWS 100
// #define MAX_COLS 100

int main() {
    int matrix[50][50];
    int transposed[50][50];
    int r, c, i, j;
    
    printf("Enter the number of rows (r) and columns (c) in the matrix: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The original matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Compute the transpose
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    printf("The transposed matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
