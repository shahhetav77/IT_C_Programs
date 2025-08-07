#include <stdio.h>
#include <string.h>
int main()
{
     int i_time;
     printf("Enter initial time you want to count down from : ");
     scanf("%d",&i_time);
     if(i_time > 0){
     for(int i = i_time;i>=0;i--)
     {
          sleep(1);
          printf("\n%d",i);
     }
     }
     else
          printf("Enter valid time")
     printf("\nCOuntdown completed!!!");
     return 0;
}
