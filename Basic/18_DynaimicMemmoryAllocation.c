                            //Dhyanesh Panchal
                            //date:-28/11/2021

                             // Dynamic Memmory Alloction 
                             //  It is use to allocate memmory during runtime.
                            //  Memmory is allocated from HEAP, hence we need to use pointers.
                            //   malloc , calloc , realloc, free    are the functions.

#include<stdio.h>
#include<stdlib.h>    //Liberary required


 int main()
{ 
    int n;
    int *var1,*var2;   // Our pointer

    // ptr = (datatype*)malloc(size of memmory block as per required);
    var1=(int*)malloc(3*sizeof(int));  // We have reserved a single memmory block of size 3 times of integer 
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of %dth element \n",i);
        scanf("%d",&var1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The value of %dth element is %d\n",i,var1[i]);
        
    }
    //Similarly we can decide the length of array as per reuirement as follows(It can be done with both calloc and malloc)
    // ptr = (datatype*)calloc(no. of blocks(n),size of each block);  
    var2=(int*)calloc(n,sizeof(int));
    printf("Enter the size of array\n");
    scanf("%d",&n);
     for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %dth element\n ",i);
        scanf("%d",&var2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %dth element is %d\n",i,var2[i]);
        
    }

    // similarly if we want to change the allocted pointers memmory we can reallocate it with realloc

    //ptr=realloc(ptr,new size);

    // and we can free the allocated memmory with function free

    return 0;
} 