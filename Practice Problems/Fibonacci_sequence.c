                              /* Dhyanesh Panchal
                                date:-08/09/21   */

                            // FIBONACCI SEQUENCE
#include<stdio.h>

int main()
{  int i,a=1,b=0,c;
    for(i=1;i<=50;i++)
    { 
         c=a+b;
         a=b,b=c;     
        printf("%d  ",c);
        
    }
    
    return 0;
}
