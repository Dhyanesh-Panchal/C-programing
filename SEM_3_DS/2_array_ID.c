// Dhyanesh Panchal
// date:-19/9/2021

// array insertion deletion

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size, length;
};
void display(struct Array A1)
{
    for (int i = 0; i < A1.length; i++)
    {
        printf(" %d", A1.A[i]);
    }
}

void insert(int n, int indx, struct Array *A1) // Use to insert new element in array at provided index
{
    if (A1->length == A1->size)
    {
        printf("Can't add the value, the array is full");
        return;
    }
    for (int i = A1->length; i > indx; i--)
    {
        A1->A[i] = A1->A[i - 1];
    }
    A1->A[indx] = n;
    if (indx > (A1->length + 1))
    {
        A1->length = indx;
    }
    A1->length++;
}

void Delete(int indx, struct Array *A1) // delete the value at indx
{
    if (indx > A1->length || indx < 0)
    {
        printf("Indx is Invalid");
        return;
    }

    for (int i = indx; i < (A1->length - 1); i++)
    {
        A1->A[i] = A1->A[i + 1];
    }
    A1->length--;
}

int main()
{
    struct Array A1;
    A1.length = 0;
    A1.size = 20;
    A1.A = (int *)calloc(A1.size, sizeof(int));

    int selector, ele, indx;
    while (1)
    {
        printf("\n Enter index to select the functionality:\n 1.insert\n2.delete\n3.display\n4.exit\n");
        scanf("%d", &selector);
        switch (selector)
        {
        case 1:
            printf("Enter the element and index of insertion:");
            scanf("%d %d", &ele, &indx);
            insert(ele, indx, &A1);
            continue;

        case 2:
            printf("Enter the index of deletion:");
            scanf("%d", &indx);
            Delete(indx, &A1);

            continue;
        case 3:
            display(A1);

            continue;
        case 4:

            break;

        default:

            continue;
        }
        break;
    }

    free(A1.A);

    return 0;
}