                              /* Dhyanesh Panchal
                                date:- 09/09/21  */

                            // POINTERS
                            // Pointers is used to point any variable. 
                            // Pointers store the ADDRESS of THE VARIABLE which it points.
#include<stdio.h>

int main()
{   int x=45;
    int *ptr= &x;  //here &x is the address of x,and * is used to denote pointer here.
    int a;
    int b=NULL;
    printf("The value of x is %d\n",x);
    printf("The addres of x is (used percent p) %p\n",&x);  // HERE %p and %x are the formate specifiers of addres.
    printf("The value of x using pointer is %d\n",*ptr);
    printf("The address of x using pointer (used percent x) is %x\n",ptr);  // %x gives hexa decimal address,%p gives only address,anyone can be used.
    printf("The address of  pointer is %x\n",&ptr);
    printf("The value of  pointer is the address of a %x\n",ptr);
    printf("this is a garbage value %d\n",a);
    printf("this is a NULL value %d\n",b);
    return 0;
}
