                              /* Dhyanesh Panchal
                                date:- 10/6/2021  */

                              // IF ELSE CONDITIONS  
#include<stdio.h>

int main()
{   
    int a,b;

    printf("Enter the value of a and b here:\n a=");
    scanf("%d",&a);

    printf("\n b=");
    scanf("%d",&b);

    if(a>b)
    {
     printf("Here number a is bigger than b  so a-b is +ve\n");
       printf("a - b = %d - %d = %d" ,a,b,a-b);
    }
    else {
           printf("Here number a is less than b so a-b is -ve\n");
           printf("a - b = %d - %d = %d" ,a,b,a-b);    
         }   
    
    return 0;
}
