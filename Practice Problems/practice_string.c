                              /* Dhyanesh Panchal
                                date:- 18/09/2021  */

                            // to print s1 is friend of s2 with strcat
#include<stdio.h>
#include<string.h>

int main()
{ char s1[2312],s2[1232];
    char s3[]=" is friend of ";
    printf("enter you name and your friends name:\nYour name-");
    gets(s1);
    printf("\n your friend's name-");
    gets(s2);
    puts(strcat(s1,strcat(s3,s2)));
   
    return 0;
}
