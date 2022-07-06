// Dhyanesh Panchal
// date:-

// Topic

#include <stdio.h>
void transpose(int a[3][3], int at[3][3])
{
    // Transpose of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            at[i][j] = a[j][i];
        }
    }
}

int main()
{
    int a[3][3], at[3][3];
    printf("ENter the Elements of matrix a row wise");
    for (int i = 0; i < 3; i++) // Rows
    {
        for (int j = 0; j < 3; j++) // Column
        {
            scanf("%d", &a[i][j]);
        }
    }

    transpose(a, at);

    // Print transpose matrix

    printf("The transpose of :\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", at[i][j]);
        }
        printf("\n");
    }

    return 0;
}