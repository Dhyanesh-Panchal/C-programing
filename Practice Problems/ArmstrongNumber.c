// Dhyanesh Panchal
// date:-

// Topic

#include <stdio.h>
#include <math.h>

void PrintAmstrong(int rl, int rh)
{
    for (int i = rl; i <= rh; i++)
    {
        int sum = 0, temp, n = 0;
        temp = i;
        while (temp > 0)
        {
            temp /= 10;
            n++;
        }
        temp = i;
        while (temp > 0)
        {
            sum += pow(temp % 10, n);
            temp /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int rl, rh;
    printf("Enter the Range \n From:");
    scanf("%d", &rl);
    printf("to:");
    scanf("%d", &rh);
    PrintAmstrong(rl, rh);
    return 0;
}