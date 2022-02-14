                            /* Dhyanesh Panchal
                                date:- 02/09/21  */

                                // GO To statments
                                // it act like aa BRIDGE to get out of the nested loop
#include <stdio.h>

int main()
{
    int a, b, i;

    for (i=0; i <= 10; i++)
    {
        printf("%d\n", i);
        printf("enter 1 to continue and 0 to exit");
        scanf("%d", &b);
        switch(b){
        case 1: continue;
    
        case 0:goto there;                     //here if I had writen "break;" then also it would worked 
        continue;

        default:printf("please enter from 1 or 0");continue;
        }
    }
    there:
    printf("Program ends");

    return 0;
}
