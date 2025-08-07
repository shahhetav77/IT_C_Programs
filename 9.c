#include <stdio.h>

int main()
{
     //tier 1 -> base discount of a 10% on total bill upto 1000 rupees
     //tier 2 -> base discount of a 10% on total bill upto 100 rupees
     //tier 3 -> base discount of a 10% on total bill upto 100 rupees
     float total;
     printf("Enter the total bill that you will proceed to checkout : ");
     scanf("%f",&total);

     if(total<=1000)
     {
          printf("your total bill is : %f",total);
     }
     else if(total >1000 && total<=5000)
     {
          printf("your total bill is : %f", total = total - (total * 0.1) );
     }
     else if(total>5000)
     {
          printf("your total bill is : %f",total = total - (total *0.2));
     }
     return 0;
}
