#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Queue
{
    Node *front;
    Node *rear;
} q1;

void Insert(Queue *q, int ele)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack is Full";
        return;
    }
    t->data = ele;
    t->next = NULL;
    if (q->front == NULL)
    {
        q->front = t;
        q->rear = t;
        return;
    }
    q->rear->next = t;
    q->rear = t;
}

int Delete(Queue *q)
{
    if (q->front == NULL)
    {
        cout << "Queue is empty";
        return -1;
    }
    Node *t = q->front;
    int ele = t->data;
    if (q->front == q->rear)
    {
        q->front = NULL;
        q->rear = NULL;
        delete t;
        return ele;
    }
    q->front = q->front->next;
    delete t;
    return ele;
}

void Display(Queue q)
{
    if (q.front == NULL)
    {
        cout << "Queue is empty";
        return;
    }
    Node *t = q.front;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

int main()
{
    q1.front = NULL;
    q1.rear = NULL;
    int selector;
    int ele;

    while (1)
    {
        printf("\n Enter index to select the functionality:\n 1.display\n2.Insert\n3.Delete\n4.exit");
        scanf("%d", &selector);
        switch (selector)
        {
        case 1:
            Display(q1);

            continue;
        case 2:

            printf("Enter the element:");
            scanf("%d", &ele);
            Insert(&q1, ele);

            continue;
        case 3:
            ele = Delete(&q1);
            if (ele == -1)
            {
                continue;
            }
            printf("The deleted element is %d", ele);
            continue;

        case 4:

            break;

        default:

            continue;
        }
        break;
    }
    return 0;
}