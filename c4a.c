// swap with a variable

#include <stdio.h>

int main(){
    int a , b;
    printf(" enter a numbe in A = ");
    scanf("%d", &a);
    printf("\n");

 printf(" enter a numbe in B = ");
    scanf("%d", &b);
    printf("\n");

printf("** before swapping ***");
printf("\n");

 printf("A=%d", a);
 printf("\n");

    printf("B=%d", b);


printf("\n");

    int temp = a;
    a=b;
    b=temp;

    printf(" *** the swapped value is ***");
printf("\n");
    printf("A=%d", a);
    printf("\n");
    printf("B=%d", b);

    return 0;
}