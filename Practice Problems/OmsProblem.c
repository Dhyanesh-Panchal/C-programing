#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("*");
        for (int j = 0; j < n - 1; j++)
        {
            if (i == 0)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("* ");
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (i == n - 2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("*");
        for (int j = 0; j < n - 1; j++)
        {
            if (j == n - 2)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}