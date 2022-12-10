// Dhyanesh Panchal
// date:-10/10/2022

// Circular queue

#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int front, rear, *arr, size;
    unsigned int isCircular : 1;
};

void Display(struct Queue q)
{
    if (q.front > q.rear)
    {
        if (!(q.isCircular))
        {
            printf("The queue is empty.");
            return;
        }
        int i = q.front;
        if ((q.rear + 1 == q.front))

        {
            printf("%d ", q.arr[i]);
            while (i != (q.rear))
            {
                i++;
                printf("%d ", q.arr[i]);
                if (i == q.size - 1)
                {
                    i = -1;
                    continue;
                }
            }
        }
        else
        {
            while (i != (q.rear + 1))
            {
                printf("%d ", q.arr[i]);
                if (i == q.size - 1)
                {
                    i = 0;
                    continue;
                }
                i++;
            }
        }
        return;
    }

    for (int i = q.front; i <= q.rear; i++)
    {
        printf("%d ", q.arr[i]);
    }
}

void Insert(struct Queue *q, int ele)
{
    // checking of Queue is FULL
    if (((q->rear == (q->size - 1)) && (q->front == 0)) || (((q->rear + 1) == q->front)) && (q->isCircular))
    {
        printf("The queue is full,unable to insert element");
        return;
    }

    if (q->rear == q->size - 1)
    {
        q->rear = 0;
        q->arr[q->rear] = ele;
        q->isCircular++;
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = ele;
    }
}

int Delete(struct Queue *q)
{
    int val;
    if ((q->front > q->rear) && !(q->isCircular))
    {
        return -1;
    }

    if (q->front == q->size - 1)
    {
        val = q->arr[q->front];
        q->arr[q->front] = 0;
        q->front = 0;
        q->isCircular++;
    }

    else
    {
        q->front++;
        val = q->arr[q->front - 1];
        q->arr[q->front - 1] = 0;
    }
    return val;
}

int main()
{
    struct Queue q1;
    q1.rear = -1, q1.front = 0, q1.isCircular = 0;
    printf("Enter the max size of Queue: ");
    scanf("%d", &q1.size);
    q1.arr = (int *)calloc(q1.size, sizeof(int));

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
                printf("The Queue is Empty");
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
    free(q1.arr);
    return 0;
}