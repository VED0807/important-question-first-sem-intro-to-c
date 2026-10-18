#include <stdio.h>

// Function to add two matrices
void addMatrices(int r, int c, int first[r][c], int second[r][c], int sum[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int r, int c, int first[r][c], int second[r][c], int diff[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            diff[i][j] = first[i][j] - second[i][j];
        }
    }
}

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    
    int a[r][c], b[r][c], sum[r][c], diff[r][c];

    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

   
    addMatrices(r, c, a, b, sum);
    subtractMatrices(r, c, a, b, diff);

   
    printf("\nResultant Addition Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
     printf("\nResultant subtraction Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}