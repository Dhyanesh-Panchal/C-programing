/* Dhyanesh Panchal
  date:- 13/09/21  */

// Call By Refrence
// given two numbers a and b  add them ,subtract them and assigne them to a and b
#include <stdio.h>
void function(int *x, int *y)
{
    int p, q;

    p = *x + *y;
    q = *x - *y;
    *x = p, *y = q;
}
int main()
{
    int a = 5, b = 3;
    printf("the value of a and b is %d and %d", a, b);
    function(&a, &b);
    printf("the value of a and b now is %d and %d", a, b);

    return 0;
}
