/* Dhyanesh Panchal
  date:-06/09/21   */

//  a raised to x
#include <stdio.h>

int power(int a, int x)
{
    int b = 1;
    for (int i = 1; i <= x; i++)
    {
        b = b * a;
    }
    return b;
}

int main()
{
    int num, pow;
    printf("enter the number and exponent you want\n \nin format a^x\n a=");
    scanf("%d", &num);
    printf("\nx=");
    scanf("%d", &pow);
    printf("\n%d^%d= %d", num, pow, power(num, pow));
    return 0;
}
