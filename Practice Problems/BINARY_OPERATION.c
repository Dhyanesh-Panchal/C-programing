/* Dhyanesh Panchal
                                date:-  11/6/2021 */

//  BINARY OPERATION
#include <stdio.h>

int main()
{
    float a, b;
    char c;
    printf("'p' for plus ,\n 'x' for multiplication ,\n 'd' for division....\nEnter a binary expression which you want to perform...\n Step 1: Enter the number (Press enter), Then enter the operation according to the instructions,:");
    scanf("%f %c %f", &a, &c, &b);
    if (c == 'p')
    {
        printf("=%0.2f", a + b);
    }
    else if (c == 'x')
    {
        printf("=%0.2f", a * b);
    }
    else if (c == 'd')
    {
        printf("=%0.2f", a / b);
    }
    else
    {
        printf("Please enter aa valid expresion acoording to the instructions provided.");
    }
    return 0;
}
