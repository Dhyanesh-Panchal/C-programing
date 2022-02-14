#include <stdio.h>

int main()
{
    int n, x = 2;
    printf("Enter the number");
    scanf("%d", &n);
start:
    if (n % x == 0)
    {
        if (n == x)
        {
            printf("the number is prime");
        }
        else
        {
            printf("It is a composite number");
            goto end;
        }
    }
    else
    {
        x++;
        goto start;
    }
end:
    
    return 0;
}