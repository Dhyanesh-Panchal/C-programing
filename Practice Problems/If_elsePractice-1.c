                              /* Dhyanesh Panchal
                                date:- 10/6/2021  */

                              // PRACTICE PROBLEM  
#include<stdio.h>

int main()
{   char a;
    printf("Enter Y if you have passed Science and Maths exam\n Other wise enter N \n");
    scanf("%c",&a);

    if(a=='y')
        { printf("Congratulations,you have got gift of 45 Rs");
          }
    if(a=='n')
        { printf("Better luck next time...");
          }
    return 0;
}
