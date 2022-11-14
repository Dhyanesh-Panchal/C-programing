#include <stdio.h>
int transf;
int TOH(int n, char A, char B, char C)
{
    if (n > 0)
    {

        TOH(n - 1, A, C, B);
        printf("Transfer from %c to %c\n", A, C);
        transf++;
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C');

    return 0;
}