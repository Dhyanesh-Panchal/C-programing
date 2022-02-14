                              /* Dhyanesh Panchal
                                date:- 5/6/2021  */

                               // ALGEBRAIC OPERATORS  
#include<stdio.h>

double main()
{                             
    float a,b,c,d,e,x,k;
    k=12;
    printf("enter the value of a \n a=");
    scanf("%f",&a);

    printf("enter the value of b \n b=");
    scanf("%f",&b);
    
    printf("enter the value of c \n c=");
    scanf("%f",&c);

    printf("enter the value of d \n d=");
    scanf("%f",&d);

    printf("enter the value of e \n e=");
    scanf("%f",&e);

    x=((a*b-e)/(c+d))*k;

    printf("the value of x is \n x=%0.2f \a",x);
    return 0;
}
