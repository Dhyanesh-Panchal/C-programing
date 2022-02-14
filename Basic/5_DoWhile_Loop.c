                                /* Dhyanesh Panchal
                                    date:-1/9/2021   */

                                // DO WHILE LOOP
                                /* the code will first enter into 'do' and then it will check the condition of 'while'
                                  untill the condition violets the code in 'do' will repeat*/
#include <stdio.h>

int main()
{
    int a, b = 1;
    printf("Enter the last number till which you want the number");
    scanf("%d", &a);

    do
    {   
        printf("%d \n", b);
        b=b+1;
    } while (b <= a);

    return 0;
}
