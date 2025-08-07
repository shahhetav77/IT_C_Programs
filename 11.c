#include <stdio.h>

int main()
{
     //using ladder if:
     /*
     short int marks;
     printf("Enter your marks : ");
     scanf("%hu",&marks);
     if(marks>=0 && marks <=100){
     if(marks>=90)
     {
          printf("\nYour grade is A\n");
     }
     else if(marks >=80 && marks < 90)
     {
          printf("\nYour Grade is B \n");
     }
     else if(marks >=70 && marks < 80)
     {
          printf("\nYour Grade is C \n");
     }
     else if(marks >=60 && marks < 70)
     {
          printf("\nYour Grade is D \n");
     }
     else if(marks < 60)
     {
          printf("\nYour Grade is F \n");
     }
     }
     else
     {
          printf("\nEnter valid value of marks. ");
     }
*/
     //using ternary operator
     short int marks;
     printf("Enter your marks : ");
     scanf("%hu",&marks);
     if(marks>=0 && marks <=100)
     (marks >= 90 ) ? printf("\nGrade is A ") : (marks >=80 && marks < 90) ? printf("\nGrade is B ") : (marks >=70 && marks < 80)? printf("\nGrade is C") : (marks >=60 && marks < 70) ? printf("\nYour grade is D") : (marks <60) ? printf("\nYour grade is F.") : printf("Enter valid marks");
     else
     printf("\nEnter valid marks.");
     return 0;
}
