#include<stdio.h>
void main()
{

     int num,rev,sum;
     printf("enter your  num:");
     scanf("%d",&num);
     while(num!=0){
          rev=num%10;
          sum=sum*10+rev;
          num=num/10;
     }
     printf("the revers num is:%d",sum);
}
