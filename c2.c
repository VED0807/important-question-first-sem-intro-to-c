#include <stdio.h>
#include <math.h>

int main(){
 float a,b,c;
 
    printf(" enter the first side of triangle a:");
    scanf("%f", &a);
    printf(" \n enter the first side of triangle b:");
    scanf("%f", &b);
    printf(" \n enter the first side of triangle c:");
    scanf("%f", &c);
    
    float s = ( a+b+c)/2 ;

   float area = sqrt(s*(s-a)*(s-b)*(s-c));

   printf(" the area is : %0.3f", area);
   
   return 0;
}