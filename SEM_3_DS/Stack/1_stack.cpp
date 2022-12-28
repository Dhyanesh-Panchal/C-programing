#include <iostream>

using namespace std;

struct Stack
{
    int top;
    int *arr;
    int size;
};

void display(struct Stack s1)
{
    if (s1.top == -1)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    for (int i = s1.top; i >= 0; i--)
    {
        cout << " " << s1.arr[i];
    }
}

int peek(struct Stack s1)
{
    return s1.arr[s1.top];
}
void push(struct Stack *s1, int ele)
{
    if (s1->top + 1 == s1->size)
    {
        cout << ("Unble to insert element, stack is full");
        return;
    }
    s1->top++;
    s1->arr[s1->top] = ele;
}

int pop(struct Stack *s1)
{
    if (s1->top == -1)
    {
        cout << ("unable to pop,stack is alrady empty");
        return -1;
    }
    s1->top--;
    return s1->arr[(s1->top) + 1];
}

int main()
{
    struct Stack s1;
    s1.top = -1;
    cout << "Enter maximum size of stack:";
    cin >> s1.size;
    s1.arr = (int *)calloc(s1.size, sizeof(int));

    int selector;
    int ele;

    while (1)
    {
        cout << ("\n Enter index to select the functionality:\n 1.display\n2.peek\n3.push\n4.pop\n5.exit");
        cin >> selector;
        switch (selector)
        {
        case 1:
            display(s1);

            continue;
        case 2:
            cout << "The peeked element is " << peek(s1);

            continue;
        case 3:

            cout << ("Enter the element:");
            cin >> ele;
            push(&s1, ele);

            continue;
        case 4:
            cout << "The popped element is " << pop(&s1);
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