#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int a[m][n], b[m][n], c[m][n];

    // Input for Matrix A
    for(int i=0; i < m ; i++){
        for (int j = 0; j < n ; j++){
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for Matrix B
    for(int i=0; i < m ; i++){
        for (int j = 0; j < n ; j++){
            printf("Enter B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Logic for Matrix Multiplication (Standard Dot Product)
    if(m == n) {
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                c[i][j] = 0; // Initialize the spot to zero
                for(int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j]; // The "Row x Column" math
                }
            }
        }

        // Final Print in "Box" format
        printf("\nResultant Matrix C:\n");
        for(int i = 0; i < m; i++) {
            printf("| "); // Start of "box"
            for(int j = 0; j < n; j++) {
                printf("%d ", c[i][j]);
            }
            printf("|\n"); // End of "box"
        }
    } else {
        printf("\n*** Please enter a square matrix (Rows must equal Columns) ***\n");
    }

    return 0;
}