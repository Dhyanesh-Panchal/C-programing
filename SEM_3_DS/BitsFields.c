// Dhyanesh Panchal
// date:-

// Topic

#include <stdio.h>

struct x
{
    unsigned int x : 1;
} s1;

int main()
{
    // int x : 1;

    s1.x = 1;
    s1.x++;
    printf("%d\n", s1.x);

    return 0;
}