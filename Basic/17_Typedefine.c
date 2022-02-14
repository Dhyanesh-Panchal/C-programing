/* Dhyanesh Panchal
  date:-24/10/2021   */

// TYPEDEFINE
//  it is used to give any datatypre a nick name
#include <stdio.h>
#include<string.h>
int main()
{
    typedef int integer;
    // typedef actualname nickname
    integer a; // is a valide statment now.

    // it main use is to give short name to structures.

    struct student
    {
        int rollno;
        char name[3543];
        float anything;
    };
     typedef struct student  std;  // we can use std in place of sturct student....etc. 

     std s1,s2,s3;   // now it is valid statment.
     s1.rollno=1;
     strcpy(s1.name,"alpha");
     printf("the name of roll no %d is %s.",s1.rollno,s1.name);
    return 0;
}
