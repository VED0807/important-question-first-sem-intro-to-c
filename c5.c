#include <stdio.h>

int main(){
    float units;
    float rate=0;
    float bill=0;

    printf(" enter the number of units");
    scanf("%f", &units);

    if ( units < 100){
        rate=1.50;
        bill = units * rate ;
        printf(" the bill is of %0.2f", bill);

     }
    
       else if ( units >= 100 && units < 300){
        rate=2.50;
        bill = units * rate ;
        printf(" the bill is of %0.2f", bill);
        
      }
      else  if ( units >= 300 && units <500){
        rate=3.50;
        bill = units * rate ;
        printf(" the bill is of %0.2f", bill);
        
        }
        else{
        rate=5.50;
        bill = units * rate ;
        printf(" the bill is of %0.2f", bill);
        
     }
  
     return 0;
}