#include <stdio.h>

int main()
{
     int age;
     printf("Enter your age : \n");
     scanf("%d",&age);

     if(age<18)
     {
          printf("You cannot open a savings account sir \n");
     }
     else if(age<0)
     {
          printf("Entered age is in invalid format \n");
     }
     else if(age>=18)
     {
          printf("You can open a savings account. ");
     }
     return 0;
}

