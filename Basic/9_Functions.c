                              /* Dhyanesh Panchal
                                date:- 02/09/21  */

                            //  FUNCTIONS 

#include<stdio.h>

//this is a function.  datatype  name ( argument1,argument2,...) { code of operation of function}
int add(int x,int y)        // this is a addition function which can be used where ever we want
{                           // THIS IS A RETURNING FUNCTION
    return x+y;
}                             

void printstar(int n)     // void is aa type of function which dosent returns any value.
{   int i;
    for(i=1;i<=n;i++)     //THIS IS A NON RETURNING FUNCTION
    {
        printf("*");
    }
}

int main()  //this is aa function.  datatype  name ( argument1,argument2,...)
{   int a,b,c;
    printf("Enter two numbers:");
    scanf("%d  %d",&a,&b);
    c=add(a,b);       // here we are using the add function
                      //here add function is returning some value hence the returning value will store in c  
    printf("the sum is %d \n",c);

    printstar(c);   // hence in this way we can print * as much as we want.THIS IS A NON RETURN FUNCTION.
    return 0;
}
         // Hence in this way we can use aa particular operation multiple times in our code where ever we need it