// Dhyanesh Panchal
// date:-19/9/2021

// Stack

#include <stdio.h>

struct Stack
{
    int top;
    int arr[20];
};

void display(struct Stack s1)
{
    for (int i = s1.top; i >= 0; i--)
    {
        printf(" %d", s1.arr[i]);
    }
}

int peek(struct Stack s1)
{
    return s1.arr[s1.top];
}
void push(struct Stack *s1, int ele)
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

    int selector;
    int ele;

    while (1)
    {
        printf("\n Enter index to select the functionality:\n 1.display\n2.peek\n3.push\n4.pop\n5.exit");
        scanf("%d", &selector);
        switch (selector)
        {
        case 1:
            display(s1);

            continue;
        case 2:
            printf("The peeked element is %d", peek(s1));

            continue;
        case 3:

            printf("Enter the element:");
            scanf("%d", &ele);
            push(&s1, ele);

            continue;
        case 4:
            printf("The popped element is %d", pop(&s1));
            continue;

        case 5:

            break;

        default:

            continue;
        }
        break;
    }

    return 0;
}