#include<stdio.h>
#include <math.h>

int main(){
int a,b;
int opp;
int task;
    printf(" enter the first number = ");
    scanf("%d", &a);
    printf(" enter the second number = ");
    scanf("%d", &b);

    printf(" enter the operator of your choice :");
    printf(" 1 = + \n 2 = - \n 3 = /\n 4 = mod \n 5 = *\n " );
    scanf("%d", &opp);
    switch(opp){

        case 1:
        task = a + b ;
printf(" the result is : %d", task );
break;

        case 2: 
        task = a - b;
        printf(" the result is : %d", task );
        break;

        case 3 :
        task = a/b ;
         printf(" the result is : %d", task );
        break;

        case 4:
        task = a % b ;
         printf(" the result is : %d", task );
        break;

        case 5:
        task = a * b ;
         printf(" the result is : %d", task );
        break;

     default:
     printf(" invalid choice ");
     break;


    }



    return 0;

}