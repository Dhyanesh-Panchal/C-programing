/* Dhyanesh Panchal
                                date:-08/09/21   */

// Units Conversion
#include <stdio.h>
void empty(char x)
{
    x=NULL;
}

char x;

int main()
{
    
    float a, b;
start:

    printf("Enter 'a' for km to miles.\n'b' for kg to pound. \n 'c' for cm to inches.\n 'd' for km/hr to m/sec.\n 'q'  for  Exit.\n");
    scanf("%c", &x);

    if (x = 'a')
    {
        printf("enter the initial value in km\n");
        scanf("%f", &a);
        printf(" %0.2f km = %0.2f miles\n", a, (0.621371192) * a);
        empty(x);
    }

    else if (x = 'b')
    {
        printf("enter the initial value in kg\n");
        scanf("%f", &a);
        printf(" %0.2f kg = %0.2f pound\n", a, (2.205) * a);
        empty(x);
    }

    else if (x = 'c')
    {
        printf("enter the initial value in cm\n");
        scanf("%f", &a);
        printf(" %0.2f cm = %0.2f inches\n", a, (0.393701) * a);
        empty(x);
    }

    else if(x='d')
     {
        printf("enter the initial value in km/hr\n");
        scanf("%f", &a);
        printf(" %0.2f km/hr = %0.2f m/sec\n", a, ((float)5 / 18) * a);
        empty(x);
     }            

    else if(x='q')
    {
        empty(x);
        goto end;
                    
    }

    else
    {
        printf("please enter according to information provided\n");
    }
            
    goto start;
    end:
    printf("Thank you for using my converter....");
    return 0;
}
