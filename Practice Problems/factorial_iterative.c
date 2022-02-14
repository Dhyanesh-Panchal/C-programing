                            //Dhyanesh Panchal
                            //date:-

                             // Factorial Iterative 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 int main()
{  
   int a;
   printf("Enter the number of which you want factorial");
   scanf("%d",&a);
    for (int i = a-1; i >0; i--)
    {
        a=a*i;
    }
    printf("the factorial is %d",a);

    return 0;
} 