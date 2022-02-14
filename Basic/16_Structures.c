                              /* Dhyanesh Panchal
                                date:-21/09/2021   */

                            //Structures.
                            // It is aa user define datatype. 
#include<stdio.h>
struct student             //in this way we can define aa datatype as per our requirement
{   int rollno;
    char name[4234];
    float marks;
} sharad,keval;    //we can give variables here also and can define variables any where also

int main()
{  struct student dhyanesh;


   printf("enter data of the students\n Dhyanesh:\n1)Rollno.=");
   scanf("%d",&dhyanesh.rollno);    // the dot operator is used like a bridge 
   printf("\nTotal Marks in percentage=");
   scanf("%f",&dhyanesh.marks);

   printf("enter data of the students\n Sharad:\n1)Rollno.=");
   scanf("%d",&sharad.rollno);   
   printf("\nTotal Marks in percentage=");
   scanf("%f",&sharad.marks);

   printf("enter data of the students\n Keval:\n1)Rollno.=");
   scanf("%d",&keval.rollno);    
   printf("\nTotal Marks in percentage=");
   scanf("%f",&keval.marks);


printf("Data-\n Dhyanesh:rollno-%d,marks-%f\n",dhyanesh.rollno,dhyanesh.marks );
printf("Data-\n Sharad:rollno-%d,marks-%f\n",sharad.rollno,sharad.marks );
printf("Data-\n keval:rollno-%d,marks-%f\n",keval.rollno,keval.marks );
    return 0;
}
