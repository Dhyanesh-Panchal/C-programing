                              /* Dhyanesh Panchal
                                date:-06/09/21   */

                            // RECURSIVE FUNCTIONS (example of Factorial(!) )
#include<stdio.h>

int factorial(int n)
 {   if (n==1,n==0)
    {
     return 1;

    } else {
            return (n*factorial(n-1));  //The Factorialfunction is used inside the factorial 
                                      // function,this is called recursion.
            }
}

int main()
{ int a;
    printf("Enter the number of which you want the Factorial\n");
    scanf("%d",& a);
    printf("= %d", factorial(a));

    
    return 0;
}
