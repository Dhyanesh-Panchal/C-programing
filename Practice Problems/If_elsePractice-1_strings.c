                              /* Dhyanesh Panchal
                                date:- 16/09/2021  */

                              // PRACTICE PROBLEM USING STRINGS 
#include<stdio.h>

int main()
{   char a[]={};
    printf("Enter Yes if you have passed Science and Maths exam\n Other wise enter No \n");
    gets(a);

    if(a[0]='Y',a[1]=='e',a[2]=='s')
        { printf("Congratulations,you have got gift of 45 Rs");
          }
    if(a[0]='N',a[1]='o')
        { printf("Better luck next time...");
          }
    return 0;
}
