                              /* Dhyanesh Panchal
                                date:-18/09/2021   */

                            // Invert the number inputed
#include<stdio.h>
#include<string.h>

int main()
{  char arr[9808],inv[9808];
   printf("Enter the number of which you want the invert\n");
   gets(arr);
    for (int i = 0; i <= strlen(arr)-1; i++)
    {   
      inv[i]=arr[strlen(arr)-1-i];
        
    }
    printf("The invert of the number is ");
    puts(inv);
    
    return 0;
}
