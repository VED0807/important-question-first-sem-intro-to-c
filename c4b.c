#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number in A = ");
    scanf("%d", &a);
    printf("Enter a number in B = ");
    scanf("%d", &b);

    printf("\n*** Before swapping ***\n");
    printf("A=%d, B=%d\n", a, b);

    
    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("\n*** The swapped value is ***\n");
    printf("A=%d, B=%d\n", a, b);

    return 0;
}
