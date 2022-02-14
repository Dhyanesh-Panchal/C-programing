                              /* Dhyanesh Panchal
                                date:- 13/09/21  */

                            // Triangular Star pattern
#include<stdio.h>
void star(int x)
{  for(int i=1;i<=x;i++)
        {
            printf("*");
        }
  printf("\n");
}
int main()
{  int a,b;
    printf("Enter 0 for Triangular star patttern and 1 for Reverse Triangular star pattern\n");
    scanf("%d",&a);
    switch(a)
    {
        case 0: printf("Enter the Number of rows you want\n");
                scanf("%d",&b);
                for(int j=1;j<=b;j++)
                {
                    star(j);
                }break;
        case 1: printf("Enter the Number of rows you want\n");
                scanf("%d",&b);
                for(int j=b;j>=1;j--)
                {
                    star(j);
                }break;
    }
    
    return 0;
}
