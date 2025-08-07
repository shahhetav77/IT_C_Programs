#include <stdio.h>

int main()
{
     int balance = 5000;
     do
     {
          int withdraw;
          printf("\nEnter the amount you want to withdraw from your wallet : ");
          scanf("%d",&withdraw);
          if(withdraw >=0 && withdraw<=5000)
          {
               balance = balance - withdraw;
               printf("\nyour balance is : %d",balance);
          }
          else
               printf("\nPlease enter correct amount !");
     }while(balance > 0);

     printf("\nYou've reached max limit ");
}
