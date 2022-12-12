#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *top;
} s1;

void display(Stack s)
{
    if (s.top == NULL)
    {
        cout << "The stack in empty";
    }
    Node *t = s.top;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

int peek(Stack s)
{
    if (s.top == NULL)
    {
        cout << "Stack is Empty";
        return -1;
    }
    return (s.top->data);
}

void push(Stack *s, int ele)
{
    Node *t = new Node;
    t->data = ele;
    t->next = NULL;
    if (s->top == NULL)
    {
        s->top = t;
        return;
    }
    else
    {
        t->next = s->top;
        s->top = t;
        return;
    }
}

int pop(Stack *s)
{
    if (s->top == NULL)
    {
        cout << "Stack is Empty";
        return -1;
    }

    Node *t = s->top;
    s->top = s->top->next;
    int ele = t->data;
    delete t;
    return ele;
}

int main()
{
    s1.top == NULL;
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