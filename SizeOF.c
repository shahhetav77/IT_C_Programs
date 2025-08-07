#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{

     printf("Size of integer function is : %d \n",sizeof(int));
     printf("Size of float function is : %d \n",sizeof(float));
     printf("Size of double function is : %d \n",sizeof(double));
     printf("Size of long function is : %d \n",sizeof(long));
     printf("Size of char function is : %d \n",sizeof(char));

     printf("Limits of integer function is [%d,%d]\n",INT_MIN,INT_MAX);
     printf("Limits of float function is [%e,%e]\n",FLT_MIN,FLT_MAX);
     printf("Limits of double function is [%lu,%lu]\n",DBL_MIN,DBL_MAX);
     printf("Limits of long function is [%ld,%ld]\n",LONG_MIN,LONG_MAX);
     return 0;
}
