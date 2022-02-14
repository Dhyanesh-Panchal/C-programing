/* Dhyanesh Panchal
  date:-31/10/2021   */

// HTML Parenthesis remover
#include <stdio.h>
#include <string.h>

int main()
{
    char inp[23423], oup[23423];
    int i = 0,k=0,l=0;
    printf("Give the HTML line including tag\n");
    gets(inp);
    for (int j = 0; j < strlen(inp); j++)
    {
        if (i < strlen(inp))
        {
            if (inp[i] == '<')
            {  while (inp[i-1] != '>')
                {
                   i++;
                }
            }   
                oup[j] = inp[i];
                i++;
        }
        else
        {
            break;
        }
    }

    printf("\nThe string is \n");
    puts(oup);
    
    return 0;
}
