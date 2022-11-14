// Dhyanesh Panchal
// date:-26/09/2022

// Infix to postfix converter

#include <stdio.h>
#include <string.h>

struct Stack
{
    int top;
    char arr[200];
};

int preference(char c)
{
    if (c == '-')
        return 0;
    else if (c == '+')
        return 1;
    else if (c == '*')
        return 2;
    else if (c == '/')
        return 3;
    return -1;
}

void push(struct Stack *s1, char ele)
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

void display(struct Stack s1)
{
    for (int i = 0; i <= s1.top; i++)
    {
        printf(" %c", s1.arr[i]);
    }
}

int main()
{
    struct Stack postFixString, operator;
    postFixString.top = -1, operator.top = - 1;

    char infixString[100];
    printf("Enter the infix Expression:");
    gets(infixString);
    for (int i = 0; i < strlen(infixString); i++)
    {
        switch (infixString[i])
        {
        case '(':
            push(&operator, '(');
            break;
        case ')':
            while (operator.arr[operator.top] != '(')
            {
                push(&postFixString, (pop(&operator)));
            }
            pop(&operator);
            break;
        case '-':
            while (preference(operator.arr[operator.top]) >= preference('-') && operator.top != - 1)
            {
                push(&postFixString, (pop(&operator)));
            }
            push(&operator, '-');
            break;
        case '+':
            while (preference(operator.arr[operator.top]) >= preference('+') && operator.top != - 1)
            {
                push(&postFixString, (pop(&operator)));
            }
            push(&operator, '+');

            break;
        case '*':
            while (preference(operator.arr[operator.top]) >= preference('*') && operator.top != - 1)
            {
                push(&postFixString, (pop(&operator)));
            }
            push(&operator, '*');

            break;
        case '/':
            while (preference(operator.arr[operator.top]) >= preference('/') && operator.top != - 1)
            {
                push(&postFixString, (pop(&operator)));
            }
            push(&operator, '/');

            break;

        default:
            push(&postFixString, infixString[i]);
            break;
        }
    }
    while (operator.top != - 1)
    {
        push(&postFixString, (pop(&operator)));
    }

    printf("\nThe post fix string is:  ");
    display(postFixString);

    return 0;
}