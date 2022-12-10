// Dhyanesh Panchal
// date-

// Topic

#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int rear, front;
    int *arr, size;
};

void Display(struct Queue q)
{
    if (q.front == q.rear)
    {
        printf("The queue is empty.");
        return;
    }
    for (int i = q.front + 1; i <= q.rear; i++)
    {
        printf("%d ", q.arr[i]);
    }
}

void Insert(struct Queue *q, int ele)
{
    if (q->rear == q->size - 1)
    {
        printf("The queue is full,unable to insert element");
        return;
    }
    q->rear++;
    q->arr[q->rear] = ele;
}

int Delete(struct Queue *q)
{
    int val;
    if (q->front == q->rear)
    {
        printf("The Queue is Empty");
        return -1;
    }
    // for (int i = q->rear; i < q->front; i++)
    // {
    //     q->arr[i] = q->arr[i + 1];
    // }
    q->front++;
    return q->arr[q->front];
}

int main()
{
    struct Queue q1;
    q1.rear = -1, q1.front = -1;
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