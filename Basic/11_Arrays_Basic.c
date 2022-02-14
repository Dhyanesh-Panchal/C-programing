                              /* Dhyanesh Panchal
                                date:- 08/09/21  */

                            // ARRAYS
                            // Example of a marks of a class
#include<stdio.h>

int main()
{ int marks[4];  //datatype  name[size(no of elements)]     FOR 1D Array
    marks[0]=47;
    marks[1]=49;   // in this way we can store value
    marks[2]=37;
    marks[3]=45;
    for(int j=0;j<=3;j++)
    {
        printf("The marks of %d roll no is %d\n",j+1,marks[j]);
    }
printf("\n\n");


  int array[2][5]={{21,34,12,34,56} , {98,89,46,34,65}}; // It is a 2D Array.it represents 2x5 matrix.
  for (int r = 0; r <=1; r++)
  {
    for(int c = 0;c<=4;c++)
    {
        printf("The element of %dth row and %dth column is %d\n",r+1,c+1,array[r][c]);
    }
  }printf("\n\n");
  




// we can take input in array also

  int marks2[3];

  for (int i = 0; i <= 2; i++)
  {
      printf("\nThe marks of %d Roll no=",i+1);
    scanf("%d",&marks2[i]);                      //Taking input with loops makes easy.
  }printf("\n");


for(int k=0;k<=2;k++)
    {
        printf("The marks of %d roll no is %d\n",k+1,marks2[k]);
    }
  
    return 0;
}
