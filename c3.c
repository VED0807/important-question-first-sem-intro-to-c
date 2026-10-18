#include <stdio.h>
#include <stdlib.h>

int main (){
 int NUM;
 int sum = 0 ;
 
    printf(" enter a three digit number : ");
    scanf("%d", &NUM);
 
if (NUM>100 && NUM < 999 ){
    while (NUM !=0){
        int a  = NUM % 10 ;
        sum = sum + a;
         NUM = NUM / 10;

    }
   
    printf(" the sum is %d", sum);
   }
   else{
      printf(" pls enter the correct designated number entry");

   }
    
return 0;
}