// Dhyanesh Panchal
// date:-

// Topic

#include <iostream>
using namespace std;
struct Queue
{
    int front, rear, *arr, size;
} q1;

void Display(struct Queue q)
{
    int i = (q.front + 1) % q.size;
    do
    {
        cout << " " << q.arr[i];
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
    cout << ("\n");
}

void Insert(struct Queue *q, int ele)
{
    if (q->front == (q->rear + 1) % q->size)
    {
        cout << ("The queue is full");
        return;
    }

    q->rear = (q->rear + 1) % q->size;
    q->arr[q->rear] = ele;
    return;
}

int Delete(struct Queue *q)
{
    if (q->front == q->rear)
    {
        cout << ("the queue is empty");
        return -1;
    }
    q->front = (q->front + 1) % q->size;
    int ele = q->arr[q->front];
    return ele;
}

int main()
{
    cout<<("enter the maximium size of the queue:");
    cin>>q1.size;
    q1.arr = new int[sizeof(int)];
    q1.front = 0, q1.rear = 0;

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