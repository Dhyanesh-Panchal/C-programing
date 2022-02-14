                            //Dhyanesh Panchal
                            //date:-28/11/2021

                             // CAR REGISTRATING APPLICATION 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    
 int main()
{ 
    struct cardetails
    {
        char owner[30];
        char model[30];
        int price;
        int year;

    };
    typedef struct cardetails car;
    car *var;
   static int n=0;
   char a;
check1:
   var = (car *)calloc(n,sizeof(car));

   printf("Enter the Details here\n1. Name:-");
   gets(var[n].owner);
   printf("Model:-");
   gets(var[n].model);
   printf("Year of manufacturing:-");
   scanf("%d",&var[n].year);
   printf("Price:-");
   scanf("%d",&var[n].price);
check2:
   printf("Enter Y to continue,L to list the data and Q to Quit\n");
   scanf("%c",&a);
   switch (a)
   {
   case 'Y':
       n++;
       
       goto check1;
       break;
   case 'L':
            for (int i = 0; i <= n; i++)
            {
                printf("==> %d)Car:-%s\n\tPrice:-%d\n\tManf. Year:-%d\n\tOwner:-%s",i+1,var[i].model,var[i].price,var[i].year,var[i].owner);
            }
            
        goto check2;           
       break;
   case 'Q':
       
       break;
   
   default:printf("Enter according to instructions provided");
       
       goto check2;
   }

  printf("Thanks For using my service.......");

    

    return 0;
} 