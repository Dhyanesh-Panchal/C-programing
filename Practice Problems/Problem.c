                            //Dhyanesh Panchal
                            //date:-

                             // Topic 

#include<stdio.h>
#include<string.h>      


 int main()
{ 
    int n,k,t;
    scanf("%d",&t);
    printf("\n\n");
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d",&n,&k);
        fflush(stdin);
        char s[n];
        gets(s);
        for (int j = 0; j < n/2; j++)
        {
            if(s[j]!=s[n-j-1]){
                k--;
            }

        }
        if (k<0)
        {
            printf("\tNO\n");
        }
        else{
            printf("\t YES\n");
        }
        printf("------------------\n");

    }
    return 0;
} 