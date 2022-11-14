// Dhyanesh Panchal
// date:-26/09/2022

// evaluate postfix expression

#include <stdio.h>
#include <string.h>

struct Stack
{
    int top;
    float arr[200];
};

// int atoi(char arr[50])
// {
//     int sum = 0;
//     for (int i = 0; i < strlen(arr); i++)
//     {
//         sum = sum * 10 + (arr[i] - 48);
//     }
//     return sum;
// }
int atoi(char c)
{
    return c - 48;
}

void push(struct Stack *s1, float ele)
{
    if (s1->top + 1 == 20)
    {
        printf("Unble to insert element, stack is full");
        return;
    }
    s1->top++;
    s1->arr[s1->top] = ele;
}

int pop(struct Stack *s1)
{
    if (s1->top == -1)
    {
        printf("unable to pop,stack is alrady empty");
        return -1;
    }
    s1->top--;
    return s1->arr[(s1->top) + 1];
}

int main()
{
    struct Stack s1;
    s1.top = -1;
    char PostFix[200];
    printf("Enter the post fix expression:");
    gets(PostFix);
    for (int i = 0; i < strlen(PostFix); i++)
    {
        float a, b;
        switch (PostFix[i])
        {
        case '-':
            b = pop(&s1);
            a = pop(&s1);
            push(&s1, a - b);
            break;
        case '+':
            b = pop(&s1);
            a = pop(&s1);
            push(&s1, a + b);
            break;
        case '*':
            b = pop(&s1);
            a = pop(&s1);
            push(&s1, a * b);
            break;
        case '/':
            b = pop(&s1);
            a = pop(&s1);
            push(&s1, a / b);
            break;

        default:
            push(&s1, atoi(PostFix[i]));
            break;
        }
    }

    printf("Answer: %f", s1.arr[s1.top]);

    return 0;
}