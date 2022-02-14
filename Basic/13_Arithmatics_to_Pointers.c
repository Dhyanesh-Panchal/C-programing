                              /* Dhyanesh Panchal
                                date:-09/09/21   */

                            // ARITHMATIC To POINTERS(Usefull in arrays)
#include <stdio.h>
int main()
{
    int arr[] = {311,52,3,4,5,6,67};
    int* arrayptr = arr;

    printf("The address of first element of the array is %d \n", &arr[0]); 
    printf("The address of first element of the array is %d \n", arr);  //Only arr is used to point the 1st ele. of array
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1); // this is arithmatic operation to pointer.
                                                                            //this means that :address of 0th ele.(arr) + 1xSize of ele. of array. this points the 2nd element of array.
    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);
    // arr--; // this line will throw an error

    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", arr[0]);
    printf("The value at address of first element of the array is %d \n", *(arr));
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", arr[1]);
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}

