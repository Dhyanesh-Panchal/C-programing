                              /* Dhyanesh Panchal
                                date:- 16/09/2021  */

                            // Strings
                            // we can input the strings as a character array
#include<stdio.h>

int main()
{   char arr1 [60]={'D','h','y','a','n','e','s','h','\0'};           //\0 is the string terminating character
    char arr[]="Hello my name is Dhyanesh.";
    char statment[]={};
    printf("printed using printf\n %s\n",arr);
    printf("Enter some statment:");
    gets(statment);
    printf("printed using puts\n");
    puts(statment);

    return 0;
}
