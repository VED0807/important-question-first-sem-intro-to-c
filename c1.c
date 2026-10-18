#include <stdio.h>
#include <math.h>


int main(){
  float R;
    float PI=3.14;

        printf(" enter the radius of the sphere : ");
         scanf("%f", &R);

         float area = 4*PI*R*R;

          float volume = (4/3)*PI*R*R*R;

         printf(" the area is:  %0.3f ", area);
         printf("\n");
    
         printf(" the volume is : %0.3f", volume);

         return 0;

}