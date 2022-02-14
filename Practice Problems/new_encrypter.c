                            //Dhyanesh Panchal
                            //date:-25/11/2021

                             // NEw Encrypter 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

 int encrypt(char arr[2000])
 {
    int a;
    a=strlen(arr)%5;
    switch (a)
    {
    case 0:
        for (int i = 0; i < strlen(arr); i++)
        {
            arr[i]=pow(10,arr[i])+1;
        }
        
        break;
    case 1:
        for (int i = 0; i < strlen(arr); i++)
        {
            
        }
        
        break;
    case 2:
        for (int i = 0; i < strlen(arr); i++)
        {
            
        }
        
        break;
    case 3:
        for (int i = 0; i < strlen(arr); i++)
        {
            
        }
        
        break;
    case 4:
        for (int i = 0; i < strlen(arr); i++)
        {
            
        }
        
        break;
    
    default:
        break;
    }
 }
 int main()
{   
    char arr;
    arr=(char)calloc(strlen(arr),1);
    gets(arr);
    printf("size of array is%d",sizeof(arr));

    return 0;
} 