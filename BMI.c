#include<stdio.h>
void main()
{
     float w,h,BMI;
     printf("please enter your weight:");
     scanf("%f",&w);
     printf("\n enter your heigth:");
     scanf("%f",&h);
     BMI=w/h;
     printf("\nBMI=%f",BMI);
     (BMI<18.5) ? printf("\n under weight"):(BMI>18.5 && BMI<24.9) ? printf("\n normal weight"):(BMI>24.9) ? printf("\n over weight"): printf("invalid");
     if(BMI<18.5){
          printf("\n under weight");
     }
     else if(BMI<18.5 && BMI>24.9){
          printf("\n normall weight");
     }
     else if(BMI>24.9){
          printf("over weight");

     }
     else{
          printf("invalid");
     }
}
