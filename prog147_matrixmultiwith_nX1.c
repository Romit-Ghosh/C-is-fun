#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int vector[MAX_COLS];
    int result[MAX_ROWS];
    int m, n, i, j;
    
    printf("Enter the number of rows (m) and columns (n) in the matrix: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Enter the elements of the vector:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }
    
    // Multiply the matrix with the vector
    for (i = 0; i < m; i++) {
        result[i] = 0;
        for (j = 0; j < n; j++) {
            result[i] += matrix[i][j] * vector[j];
        }
    }
    
    printf("The result of the matrix-vector multiplication is:\n");
    for (i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }
    
    return 0;
}
