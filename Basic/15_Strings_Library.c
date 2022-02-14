                              /* Dhyanesh Panchal
                                date:-18/09/2021   */

                            // string.h functions
#include<stdio.h>
#include<string.h>

int main()
{   char s1[]="Dhyanesh";
    char s2[]="Dhruv";
    char s3[342];
    puts(strcat(s1,s2));  //this combines two strings
    printf("the length of s1 string is %d\n",strlen(s1));  // this gives length of string
    printf("the length of s2 string is %d\n",strlen(s2));
    strcpy(s3, strcat(s1,s2)); // strcpy copies the string in 2nd argument in 1st argument
    puts(s3);
    
    // to compare two strings means to compare the ascii value,IT detects the 1st unmatching character.
    // it gives +ve ,-ve and 0 out put as per argument 

    printf("The comparision between the both string is %d\n", strcmp(s1,s2)); //in the comparison the 1st unmatching character is y and r,and y>r hence +ve output is given.
    printf("The comparision between the both string is %d\n", strcmp(s2,s1)); //in the comparison the 1st unmatching character is r and y,and y>r hence -ve output is given.
    printf("The comparision between the both string is %d\n", strcmp(s1,s1)); // here both strings are same hence we get 0 as output.\n





    return 0;
}
