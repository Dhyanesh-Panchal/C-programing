                            //Dhyanesh Panchal
                            //date:-

                             // Topic 

#include<stdio.h>

void pattern(int n){
    int a=n;
    for (int i = 0; i < (2*n)-1; i++)
    {
        for (int j = 0; j < (2*n)-1; j++)
        {
           
            printf("%d  ",a);
            if(((j)<i)&&(j<n)&&(i<n))
            {
                a--;
              
            }
            if((((2*n-3)-j)<i)&&(j>=(n-1))&&(i<n))
            {
                a++;
               
            }
            if((((2*n-3)-i)>(j-1))&&(j<n)&&(i>=n))
            {
                a--;
              
            }
            if((i<j+1)&&(j>=(n-1))&&(i>=n))
            {
                a++;
               
            }    
           
            
            
        }
        a=n;
        printf("\n");
    }
    
}

 int main()
{ 
    int n;
    printf("enter the value :");
    scanf("%d",&n);
    pattern(n);


    return 0;
} 