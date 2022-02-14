                              /* Dhyanesh Panchal
                                date:- 9/6/2021  */         

                             // Parctice Problem
#include<stdio.h>

int main()
{ int a,b;

  printf("Enter the value of a and b: \n a=");
  scanf("%d" ,&a);

  printf(" \n b=");
  scanf("%d" ,&b);

  if (a==b)
    { printf (" here a = b hence we have 3a=%d" ,3*a);
      }

  else 
  { printf("here a is not equal to b thus we have a+b = %d \a" , a+b);
    }

 return 0;
}