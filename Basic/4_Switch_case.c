                            /* Dhyanesh Panchal
                                date:- 31/8/2021  */

                               // SWITCH CASE
#include<stdio.h>

int main()
{
    char a;
    printf("(a) 1 to 10 \n (b) 11 to 20 \n (c) 21 to 30 \n\n Enter a,b,c as per requirment: ");
    scanf("%c",&a);
    switch(a){
        case 'a':printf("1,2,3,4,5,6,7,8,9,10");break;
        case 'b':printf("11,12,13,14,15,16,17,18,19,20");break;
        case 'c':printf("21,22,23,24,25,26,27,28,29,30");break;
        default:printf("please enter a or b or c");
    }
    return 0;
}