#include <stdio.h>

int main()
{
     int total_matchsticks = 21;
     int user_pick;
     int computer_pick;
     do{
     printf("\nchoose how many matchsticks you want to pick (between 1,2,3 or 4) : ");
     scanf("%d",&user_pick);
     computer_pick = 5 - user_pick;
     printf("\ncomputer's pick is : %d",computer_pick);
     total_matchsticks -= user_pick + computer_pick ;
     printf("\nremaining matchsticks are : %d",total_matchsticks);
     if((total_matchsticks - computer_pick) <= 0)
     {
          printf("\nwooo you beat computer !!!");
     }
     else if((total_matchsticks - user_pick <=0 ))
     {
          printf("\nyou lost to computer !~!");
     }
     }while(total_matchsticks>=0);

     return 0;
}
