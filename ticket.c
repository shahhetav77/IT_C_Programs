#include<stdio.h>
int main()
{
     int age,a,i;
     char name;
     int sum;
     printf("how many members :");
     scanf("\n %d",&a);
     for(i=1;i<=a;i++){
     printf("\n enter your age and name's first letter:");
     scanf("\n %d \n %c",&age,&name);
     }
     int b,c,d;

     c = 100;
     b = 0;
     if(age<=12){
          printf("\n one free ticket Rs= %d",b);
     }
     if(age>12 && age<60){
          printf("\n please pay 100Rs \n  Rs = %dRs",c);
     }

     if(age>=60){
          printf("\n congrats you got free entry!! \n payed Rs = %dRs",b);
     }
     sum = sum+c;
     if(a<=5){
          printf("\n you got 10 percent discount");
          sum =100 - ((10*c)/sum);
     }
     printf("\n total = %d",sum);
     }

