#include <stdio.h>

int add(int *x, int *y) {
    return *x + *y;
}

int diff(int *x, int *y) {
    return *x - *y;
}

int multiply(int *x, int *y) {
    return *x * *y;
}


float divide(int *x, int *y) {
    if (*y != 0) {
        return (float)*x / *y; 
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    int A, B;
    int sum, sub, mult;
    float div_res;

    printf("Enter the first number: ");
    scanf("%d", &A);
    printf("Enter the second number: ");
    scanf("%d", &B);

    sum = add(&A, &B);
    sub = diff(&A, &B);
    mult = multiply(&A, &B);
    div_res = divide(&A, &B);

    printf("\n--- Results ---\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", sub);
    printf("Multiplication: %d\n", mult);
    
    if (B != 0) {
        printf("Division: %.2f\n", div_res);
    }

    return 0;
}