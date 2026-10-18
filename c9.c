#include <stdio.h>

int armstrong_sum(int n) {
    int sum = 0;
    int digit;

    while (n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum;
}
int prime(int n){
    int sum = 0;
    int count = 0;
    for(int i=1; i <=n; i++){
    if ( n % i ==0){
   count++;
}
    }
    return count;
}
int perfect(int n){
    int sum=0;
 for (int i = 1; i <=n/2;i++){
    if ( n % i == 0 ){

      sum +=i;
    }
 }
    return sum;
}
int main() {
    int num;
    int sum;
int count;
int sum2;
    printf("Enter the number: ");
    scanf("%d", &num);

    sum = armstrong_sum(num);

    if (num == sum) {
        printf("The number is armstrong\n");
    } else {
        printf("The number is not armstrong\n");
    }
count = prime(num);
if ( count ==2 ){
    printf(" the number is prime\n");

}
else {
    printf(" the number is not prime\n");
}
sum2=perfect(num);
if (sum2 == num){
   printf(" the number is a perfect number\n");
 }
 else {
   printf(" the number is not a perfect number\n ");

    return 0;
}
}
